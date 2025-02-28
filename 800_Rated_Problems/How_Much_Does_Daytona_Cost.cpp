#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
 
//Ankur Verma


int main()
{
int testcase;
cin>>testcase;
for(int i=0;i<testcase;i++){
int n,k;
cin>>n>>k;
vector<int>arr(n);
bool isFounded = false;
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]==k) isFounded = true;
}
if(isFounded) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
return 0;
}