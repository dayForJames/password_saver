void show() {
    string str;
    int ind = 0;
    str = decrypt(readSource());
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '\n') ind++;
        else break;
    }
    cout << "\nAll sources:\n • ";
    for (int i = ind + 7; i < str.size(); i++) {
        if (str[i] == '\n') {
            i += 7;
            cout << endl << " • ";
        }
        else
            cout << str[i];
    }
    cout << "- That's the end of loop's journey\n";
}
