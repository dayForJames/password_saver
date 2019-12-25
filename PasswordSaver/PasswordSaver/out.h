#ifndef OUT_H_INCLUDED
#define OUT_H_INCLUDED

void output() {
    fstream f;
    string source, str;
    cout << "Source: ";
    cin >> source;
    
    //  Reading Source.txt
    
    str = decrypt(readSource());
    long long pos = str.find(tolow(source));
    if (pos != -1) {
        string code;
        
        //  Reading code from Source.txt
        
        for (int i = 0; i < 5; i++)
            code.push_back(str[pos - 7 + i]);
        str.clear();

        //   Reading PAS.txt
        
        str = decrypt(readPAS());
        pos = str.find(code);
        int count = 0;
        for (long long i = pos + 8; i < str.size() && count < 2; i++) {
            if (str[i] == '\n') count++;
            cout << str[i];
        }
    }
    else
        cout << "ERROR 1\nNOT FOUND\n";
}
#endif // OUT_H_INCLUDED
