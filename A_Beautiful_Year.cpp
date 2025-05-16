#include <bits/stdc++.h>
using namespace std;

bool hasdistinctDigit(int year)
{
    string s = to_string(year);
    set<char> digit(s.begin(), s.end());
    return digit.size() == s.size();
}
int main()
{
    int n;
    cin >> n;
    int year = n + 1;
    while (!hasdistinctDigit(year))
    {
        year++;
    }
    cout << year << endl;
    return 0;
}