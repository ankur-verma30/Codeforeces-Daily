#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
 
//Ankur Verma
long long solve(long long n){
if(n<3) return n+1;
long long count=3;
long long quotient=n/15;
int rem=n%15;
if(rem==0) return quotient*3+1;
if(rem==1) return quotient*3+2;
if(rem>=2) return quotient*3+3; 

return count;
}

int main()
{
int testcase;
cin>>testcase;
for(int i=0;i<testcase;i++){
long long n;
cin>>n;
cout<<solve(n)<<endl;
}
return 0;
}