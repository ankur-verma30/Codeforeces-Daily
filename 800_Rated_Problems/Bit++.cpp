#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

// Ankur Verma
int main()
{
    int testcase;
    cin >> testcase;
    int x = 0;
    for (int i = 0; i < testcase; i++)
    {
        string str;
        cin >> str;
        if (str[0] == 'X')
        {
            if (str[1] == '-' && str[2] == '-')
                x = x - 1;
            else if (str[1] == '+' && str[2] == '+')
                x = x + 1;
        }
        else if (str[0] == '-' && str[1] == '-' && str[2] == 'X')
            x = x - 1;
        else if (str[0] == '+' && str[1] == '+' && str[2] == 'X')
            x = x + 1;
    }
    cout << x << endl;
    return 0;
}