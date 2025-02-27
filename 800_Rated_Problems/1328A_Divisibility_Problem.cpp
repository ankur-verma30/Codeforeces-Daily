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
int a,b;
cin>>a>>b;
if(a<b) cout<<b-a<<endl;
else{
    int rem=a%b;
    cout<<(b-rem)%b<<endl;
}
}
return 0;
}