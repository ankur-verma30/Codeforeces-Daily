#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

// Ankur Verma
ll solve(ll n, ll x, vector<ll> &a)
{
    priority_queue<ll> pq1(a.begin(), a.end());
    priority_queue<ll, vector<ll>, greater<ll>> pq2;

    ll count = 0;
    while (!pq1.empty())
    {
        int val = pq1.top();
        pq1.pop();
        pq2.push(val);
        int minVal = pq2.top();
        int size = pq2.size();
        if (minVal * size >= x)
        {
            count++;
            pq2 = priority_queue<ll, vector<ll>, greater<ll>>();
        }
    }
    return count;
}

int main()
{
    int testcase;
    cin >> testcase;
    for (int i = 0; i < testcase; i++)
    {
        ll n, x;
        cin >> n >> x;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        cout << solve(n, x, a) << endl;
    }
    return 0;
}