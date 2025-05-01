#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

// Ankur Verma
int solve(int n, vector<int> &a)
{
    if (n < 8)
        return 0;
    unordered_map<int, int> mpp;

    mpp[0] = 3;
    mpp[1] = 1;
    mpp[2] = 2;
    mpp[3] = 1;
    mpp[5] = 1;

    for (int i = 0; i < n; i++)
    {
        if (mpp.find(a[i]) != mpp.end())
        {
            mpp[a[i]]--;
            if (mpp[a[i]] == 0)
                mpp.erase(a[i]);
        }
        if (mpp.empty())
            return i + 1;
    }

    if (!mpp.empty())
        return 0;
    return n;
}

int main()
{
    int testcase;
    cin >> testcase;
    for (int i = 0; i < testcase; i++)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        cout << solve(n, a) << endl;
    }
    return 0;
}