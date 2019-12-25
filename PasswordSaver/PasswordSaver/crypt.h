//
//  crypt.h
//  PasswordSaver
//
//  Created by James on 11/07/2019.
//  Copyright © 2019 James. All rights reserved.
//

#ifndef crypt_h
#define crypt_h

//  Crypt message

string crypt(string str) {
    unsigned long long lines = str.length(), ind = 0;
    while (lines % 5 != 0) {
        lines++;
    }
    lines /= 5;
    char privateMessage[lines][5];
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < lines; j++)
            privateMessage[j][i] = ' ';
    for (int i = 0; i < 5 && ind < str.length(); i++)
        for (int j = 0; j < lines && ind < str.length(); j++)
            privateMessage[j][i] = str[ind++];
    str.clear();
    
    //  Push back crypted message to str
    
    for (int i = 0; i < lines; i++)
        for (int j = 0; j < 5; j++)
            str.push_back(privateMessage[i][j]);
    return str;
}

//  Decrypt message

string decrypt(string str) {
    unsigned long long lines = str.length(), ind = 0, n = 0;
    lines /= 5;
    char privateMessage[lines][5];
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < lines; j++)
            privateMessage[j][i] = ' ';
    for (int i = 0; i < lines && ind < str.length(); i++)
        for (int j = 0; j < 5 && ind < str.length(); j++)
            privateMessage[i][j] = str[ind++];
    str.clear();
    for (int i = 4; i >= 0; i--) {
        for (unsigned long long j = lines - 1; j >= 0; j--) {
            if (privateMessage[j][i] == ' ' || privateMessage[j][i] == '\n')
                n++;
            else break;
        }
    }
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < lines; j++)
            str.push_back(privateMessage[j][i]);
    if (n > 0 && !isalpha(str[str.length() - n]))
        str.erase(str.length() - n, str.length());
    else if (n > 0)
             str.erase(str.length() + 1 - n, str.length());
    if (str[str.length() - 1] != '\n') str.push_back('\n');
    if (str[str.length() - 2] == '\n') str.pop_back();
    return str;
}

#endif /* crypt_h */
