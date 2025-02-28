#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
 
//Ankur Verma
int solve(int n,string str){
int left=0,right=n-1;
while(left<right){
if((str[left]=='1' && str[right]=='0') || (str[left]=='0' && str[right]=='1') ){
    left++;
    right--;
}
else break;
}
return right-left+1;
}


int main()
{
int testcase;
cin>>testcase;
for(int i=0;i<testcase;i++){
int n;
cin>>n;
string str;
cin>>str;

int len1=solve(n,str);
reverse(str.begin(), str.end());
int len2=solve(n,str);

cout<<min(len1,len2)<<endl;

}
return 0;
}