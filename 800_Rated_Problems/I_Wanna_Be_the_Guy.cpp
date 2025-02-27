#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

// Ankur Verma

int main()
{
    int n;
    cin >> n;
    int p;
    cin >> p;
    vector<int> a(p);
    vector<int> freq(n + 1, 0);
    for (int i = 0; i < p; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
    }
    int q;
    cin >> q;
    vector<int> b(q);

    for (int i = 0; i < q; i++)
    {
        cin >> b[i];
        freq[b[i]]++;
    }
    bool clear = true;
    for (int i = 1; i < n + 1; i++)
    {
        if (freq[i] == 0)
        {
            clear = false;
            break;
        }
    }

    if (clear)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;

    return 0;
}