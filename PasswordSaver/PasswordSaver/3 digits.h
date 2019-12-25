void threeDigits() {
string num;
cin >> num;
for (int i = num.size() - 1; i > 0; i--)
    if ((i + 2) % 3 == 0)
        num.insert(i, ",");
cout << num;
}
