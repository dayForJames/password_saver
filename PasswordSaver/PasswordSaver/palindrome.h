bool ifIntPalindrome(int n) {
    int cop = n, d = 1;
    while (cop > 9) {
        cop /= 10;
        d *= 10;
    }
    int sum = 0;
    cop = n;
    while (cop) {
        sum += cop % 10 * d;
        cop /= 10;
        d /= 10;
    }
    return ((sum == n) ? 1 : 0);
}

bool ifStringPalindrome(string str) {
    bool answ = true;
    int i = 0;
    for (auto &a: str)
        a = tolower(a);
    while (i < str.size() && answ == true) {
        if (str[i] != str[str.size() - 1 - i])
            answ = false;
        i++;
    }
    return ((answ == true) ? 1 : 0);
}
