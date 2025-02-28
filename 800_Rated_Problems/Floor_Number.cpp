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
int n,x;
cin>>n>>x;
if(n<=2){
    cout<<1<<endl;
    continue;
}
n=n-2;
int floor=n/x;
int remainingFloor=n%x;
if(remainingFloor==0 ) cout<< floor+1<<endl;
else cout<< floor+2<<endl;

}
return 0;
}