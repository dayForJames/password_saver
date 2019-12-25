#ifndef IN_H_INCLUDED
#define IN_H_INCLUDED

#include "SourceList.h"

void input() {
    const int len = 6;
    char code[len];
    string str = decrypt(readPAS()), strCode, login, password;
    randStr(code, len - 1);
    sourceInput(code);
    cout << "Login: ";
    cin >> login;
    cout << "Password: ";
    cin >> password;
    for (int i = 0; i < len; i++)
        strCode.push_back(code[i]);
    str += strCode + ":\nlogin: " + login + "\npassword: " + password + '\n';
    inputPAS(crypt(str));
}

#endif // IN_H_INCLUDED
