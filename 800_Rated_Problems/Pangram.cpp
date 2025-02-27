#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
 
//Ankur Verma

int main()
{

int n;
cin>>n;
string s;
cin>>s;

int len=s.length();
if(len<26) cout<<"NO"<<endl;
else {
    if(len>=26){
      vector<int>freq(26,0);
      for(const auto &ch:s){
        freq[ch-'a']++;
        freq[ch-'A']++;
      }
      bool flag = true;
      for(int i=0;i<26;i++){
        if(freq[i]==0) {
            flag=false;
            break;
        }
      }

      if(!flag) cout<<"NO"<<endl;
      else cout<<"YES"<<endl;
    }
    
}
return 0;
}