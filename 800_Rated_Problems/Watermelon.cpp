#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{

    int n;
    cin >> n;

    int remaining = n - 2;
    if (remaining % 2 == 0 && remaining > 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}