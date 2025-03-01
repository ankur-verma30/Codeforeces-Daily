#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
 
//Ankur Verma

int main()
{
int n;
cin>>n;
vector<int>minutes(n);
for(int i=0;i<n;i++){
    cin>>minutes[i];
}

int totalMinutes=0;
if(minutes[0]>15){
    cout<<15<<endl;
}
else {
    bool flag=true;
    if(minutes[0]<=15){
        totalMinutes+=minutes[0];
        for(int i=1;i<n;i++){
            if(minutes[i]-minutes[i-1]<=15){
                totalMinutes=minutes[i];
            }
            else {
                totalMinutes+=15;
                flag=false;
                break;
            }
        }
}
if(90-minutes[n-1]<=15 && flag) cout<<90<<endl;
else if(90-minutes[n-1]>15 && flag) cout<<totalMinutes+15<<endl;
else cout<<totalMinutes<<endl;
}



return 0;
}