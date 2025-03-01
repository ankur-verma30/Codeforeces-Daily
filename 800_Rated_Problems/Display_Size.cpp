#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
 
//Ankur Verma


int main()
{
int n;
cin>>n;
int firstDivisor=1;
int absDifference=INT_MAX;
for(int i=1;i<=n/2;i++){
    if(n%i==0) {
        int secondDivisor=n/i;
        int diff=abs(firstDivisor-secondDivisor);
        if(absDifference>diff){
            firstDivisor=max(firstDivisor,i);
            absDifference=diff;
        }
    }
}

int secondDivisor=n/firstDivisor;
if(firstDivisor>secondDivisor) swap(firstDivisor,secondDivisor);
cout<<firstDivisor<<" "<<secondDivisor<<endl;
return 0;
}