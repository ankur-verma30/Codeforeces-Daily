#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

// Ankur Verma

int main()
{
    int n, m;
    cin >> n >> m;
    char a[n][m];
    unordered_set<char> st;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            st.insert(a[i][j]);
        }
    }

    if (st.count('C') || st.count('M') || st.count('Y'))
        cout << "#Color";
    else
        cout << "#Black&White";
    
    return 0;
}