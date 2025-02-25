#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
 
//Ankur Verma
int solve(int n,int k,int p){
if(k==0) return 0; 
int ans=0;
int quotient=k/p;
int remainder=k%p;
if(remainder!=0){
    if(abs(quotient)+1<=n) return abs(quotient)+1;
    else return -1;
}
else{
    if(abs(quotient)<=n) return abs(quotient);
}
return -1;
}

int main()
{
int testcase;
cin >> testcase;
for(int i=0;i<testcase;i++){
    int n,k,p;
cin >> n >> k >> p;

cout<<solve(n,k,p)<<endl;
}

return 0;
}