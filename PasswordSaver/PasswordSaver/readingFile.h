string readSource() {
    fstream f("/Users/james/Desktop/PasswordSaver/PasswordSaver/Source.txt", ios::in);
    string str;
    while (!f.eof()) {
        char t;
        f.get(t);
        str.push_back(t);
    }
    f.close();
    return str;
}
string readPAS() {
    fstream f("/Users/james/Desktop/PasswordSaver/PasswordSaver/PAS.txt", ios::in);
    string str;
    while (!f.eof()) {
        char t;
        f.get(t);
        str.push_back(t);
    }
    f.close();
    return str;
}

void inputSource(string str) {
    fstream f("/Users/james/Desktop/PasswordSaver/PasswordSaver/Source.txt", ios::trunc | ios::out);
    if (f) {
        f << str;
        f.close();
    }
    else
        cout << "\nERROR 0\nNOT FOUND\n";
}

void inputPAS(string str) {
    fstream f("/Users/james/Desktop/PasswordSaver/PasswordSaver/PAS.txt", ios::trunc | ios::out);
    if (f) {
        f << str;
        f.close();
    }
    else
        cout << "\nERROR 0\nNOT FOUND\n";
}
