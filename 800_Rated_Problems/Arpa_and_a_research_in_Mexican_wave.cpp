#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
 
//Ankur Verma


int main()
{
long long n,k,t;
cin >> n >> k >> t;
if(t<=k) cout<<t<<endl;
else if(t<=n) cout<<k<<endl;
else if(t>n){
    long long rem=t%n;
    cout<<k-rem<<endl;
}

return 0;
}