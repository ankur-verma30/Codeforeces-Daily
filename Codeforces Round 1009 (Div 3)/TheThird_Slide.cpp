#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
 
//Ankur Verma
int solve(int n,vector<int>&sides){
    priority_queue<int>pq;
    for(int i=0;i<n;i++){
        pq.push(sides[i]);
    }

    while(pq.size()>1){
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        pq.push(a+b-1);
    }
    return pq.top();

}

int main()
{
int testcase;
cin>>testcase;
for(int i=0;i<testcase;i++){
int n;
cin>>n;
vector<int>sides(n);
for(int i=0;i<n;i++){
    cin>>sides[i];
}

cout<<solve(n,sides)<<endl;
}
return 0;
}