#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
 
//Ankur Verma

int main()
{
int k,l,m,n,d;
cin>>k>>l>>m>>n>>d;
vector<int>dragons(d+1,0);
for(int i=k;i<=d;i+=k){
    if(dragons[i]==1) continue;
    else dragons[i]=1;
}

for(int i=l;i<=d;i+=l){
    if(dragons[i]==1) continue;
    else dragons[i]=1;
}

for(int i=m;i<=d;i+=m){
    if(dragons[i]==1) continue;
    else dragons[i]=1;
}

for(int i=n;i<=d;i+=n){
    if(dragons[i]==1) continue;
    else dragons[i]=1;
}
int totalDragons=0;
for(const auto &dragon:dragons){
    if(dragon==1) totalDragons++;
}
cout<<totalDragons<<endl;
return 0;
}