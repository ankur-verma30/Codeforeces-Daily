#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
 
//Ankur Verma
pair<int,int> solve(int n1,int n2){
if(n1==9 && n2==1) return {9,10};
if(n2<n1) return {-1,-1};
if(n2-n1>=2) return  {-1,-1};

if(n1==n2){
    return {n1*10,n1*10+1};
} 
if(n2-n1==1){
    return {n1*10+9,n2*10};
}
}

int main()
{
int n1,n2;
cin >> n1 >>n2;

pair<int,int>ans=solve(n1,n2);
if(ans.first==-1) cout<<-1<<endl;
else cout<<ans.first<<" "<<ans.second<<endl;

return 0;
}