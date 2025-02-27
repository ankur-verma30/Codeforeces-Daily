#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

long long solve(int n, string &s)
{
    long long underScoreCount = 0, hyphenCount = 0;
    if (n < 3)
        return 0;

    for (const auto &ch : s)
    {
        if (ch == '_')
            underScoreCount++;
        else if (ch == '-')
            hyphenCount++;
    }

    if (underScoreCount < 1 || hyphenCount < 2)
        return 0;

    if (hyphenCount % 2 == 0)
        return ((hyphenCount / 2) * (hyphenCount / 2) * underScoreCount);

    long long halfCount = hyphenCount / 2;
    return (halfCount * (halfCount + 1) * underScoreCount);
}

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << solve(n, s) << endl;
    }
    return 0;
}