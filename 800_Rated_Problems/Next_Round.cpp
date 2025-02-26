#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
 
//Ankur Verma

int main(){
int n,k;
cin >> n >> k;

vector<int> arr(n);

for(int i=0; i<n; i++) cin >> arr[i];
int participantValue=arr[k-1];
int count=0;
for(const auto &it:arr){
    if(it>=participantValue && it>0) count++;
}

cout<<count<<endl;

return 0;
}