#ifndef SOURCELIST_H_INCLUDED
#define SOURCELIST_H_INCLUDED

void sourceInput(char *c) {
    fstream f;
    string str = decrypt(readSource()), strCode, source;
    cout << "Source: ";
    cin >> source;
    for (int i = 0; i < strlen(c); i++)
        strCode.push_back(c[i]);
    str += strCode + ": " + tolow(source) + '\n';
    inputSource(crypt(str));
}

#endif // SOURCELIST_H_INCLUDED
