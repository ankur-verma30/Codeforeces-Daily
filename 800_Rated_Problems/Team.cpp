#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
 
//Ankur Verma
int solve(int n,vector<vector<int>>&solution){
int count = 0;

for(int i = 0; i < n;i++){
    int x=0;
    for(int j = 0; j < 3; j++){
        x+=solution[i][j];
    }
    if(x>=2) count++;
}
return count;
}

int main()
{
int n;
cin>>n;
vector<vector<int>>solution;
for(int i=0;i<n;i++){
    vector<int>temp(3);
    for(int j=0;j<3;j++) cin>>temp[j];
    solution.push_back(temp);
}

cout<<solve(n,solution)<<endl;

return 0;
}