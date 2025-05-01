#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
 
//Ankur Verma

int main()
{
int a,b;
cin>>a>>b;
if(a%b==0 || b%a==0) cout<<"Multiples"<<endl;
else cout<<"No Multiples"<<endl;
return 0;
}