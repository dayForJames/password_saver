void checkWords () {
    string str, dictionary, editStr;
    int n, pos;
    getline(cin, str);
    cin >> n;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ' ')
            editStr.push_back(' ');
        else
            editStr.push_back('~');
    }
    for (int i = 0; i < n; i++) {
        cin >> dictionary;
        pos = str.find(dictionary);
        if (pos != -1 && pos + dictionary.size() <= editStr.size()) {
            if (editStr[pos + dictionary.size()] == ' ' || pos + dictionary.size() == editStr.size()) {
                int j = pos;
                while (editStr[j] != ' ' && j < editStr.size()) {
                    editStr[j++] = '.';
                }
            }
        }
    }
    cout << str << endl << editStr;
}
