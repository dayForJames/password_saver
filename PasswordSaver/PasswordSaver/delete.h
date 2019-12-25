#ifndef DELETE_H_INCLUDED
#define DELETE_H_INCLUDED

//count \n in the end of the file
int countN(string str) {
    int count = 0;
    for (unsigned long i = str.size() - 1; i >= 0; i--) {
        if (str[i] == '\n') count++;
        else break;
    }
    //cause one \n is needed for all programm well-working
    return (count - 1);
}

string helpfulDel(string str) {
    int count = 0;
    count = countN(str);
    str.erase(str.size() - count, count);
    return str;
}

//delete unneccessary \n in files
void deleteUnneccessaryLines() {
    fstream f;
    string str;
    str = helpfulDel(decrypt(readSource()));
    f.open("/Users/james/Desktop/PasswordSaver/PasswordSaver/Source.txt", ios::trunc | ios::out);
    f << str;
    f.close();
    str = helpfulDel(decrypt(readPAS()));
    f.open("/Users/james/Desktop/PasswordSaver/PasswordSaver/PAS.txt", ios::trunc | ios::out);
    f << str;
    f.close();
}

void deleteSource(string source) {
    string str = decrypt(readSource()), code;
    long long pos;
    pos = str.find(tolow(source));
    if (pos != -1) {
        for (int i = 0; i < 5; i++)
            code.push_back(str[pos - 7 + i]);
        str.erase(pos - 7, pos + source.length());
        cout << str;
        //inputSource(str);
        str.clear();
        str = decrypt(readPAS());
        pos = str.find(code);
        int countN = 0, count = 0;
        for (long long i = pos; i < str.length() && countN < 3; i++) {
            if (str[i] == '\n') countN++;
            count++;
        }
        count += 3;
        str.erase(pos, count);
        //cout << str;
    } else
        cout << "\nSource was not found\n";
}

void deleteLogin(string source) {
    
}

void delPrep() {
    string source;
    cout << "Source: ";
    cin >> source;
    deleteSource(tolow(source));
}

#endif
