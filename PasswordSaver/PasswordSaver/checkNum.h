string checkNum(string num) {
    string str;
    for (auto &i : num) {
        if (i != '-' && i != '(' && i != ')')
            str.push_back(i);
    }
    if (str.size() == 12) {
        str.erase(0, 2);
    }
    else if (str.size() == 11) {
        str.erase(0, 1);
    }
    else
        str = "495" + str;
    return str;
}

void check() {
  int i = 0;
    string num, str;
    cin >> num;
    num = checkNum(num);
    while (i < 3) {
        cin >> str;
        if (num == checkNum(str))
            cout << "YES";
        else
            cout << "NO";
    }
}
