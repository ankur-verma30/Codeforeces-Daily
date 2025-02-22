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
string str;
cin>>str;

int n=str.length();
if(n<=10) cout<<str<<endl;
else if(n>10){
int n2=str.length()-2;
string str2=str[0]+to_string(n2)+str[n-1];
cout<<str2<<endl;
}

}
return 0;
}