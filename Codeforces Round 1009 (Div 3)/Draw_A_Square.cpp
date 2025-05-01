#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
 
//Ankur Verma
int main() {
    int T;
    cin >> T; 
    while (T--) {
        int l, r, d, u;
        cin >> l >> r >> d >> u;
        if (l == r && r == d && d == u) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}