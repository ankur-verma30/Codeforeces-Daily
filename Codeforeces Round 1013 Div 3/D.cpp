#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

// Ankur Verma
ll solve(ll n, ll m, ll k)
{
    long long accquiredCells = n * (m / 2);
    if (k <= accquiredCells)
        return 1;
    long long remainingCells = k - accquiredCells;
    long long benchCount = 1;
    long long columns = remainingCells / n;
    long long remainder = remainingCells % n;
    if (remainder)
        columns++;
    return min(m, benchCount + 2 * columns);
}

int main()
{
    int testcase;
    cin >> testcase;
    for (int i = 0; i < testcase; i++)
    {
        ll n, m, k;
        cin >> n >> m >> k;

        cout << solve(n, m, k) << endl;
    }
    return 0;
}