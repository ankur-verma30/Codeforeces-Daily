// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L

#include<bits/stdc++.h>
using namespace std;

int main(){
string firstName,SecondName;
getline(cin,firstName);
getline(cin,SecondName);
int index1=-1,index2=-1;

for(int i=0;i<firstName.length();i++){
    if(firstName[i]==' '){
        index1=i;
        break;
    }
}

for(int i=0;i<SecondName.length();i++){
    if(SecondName[i]==' '){
        index2=i;
        break;
    }
}

string firstLastName=firstName.substr(index1);
string secondLastName=SecondName.substr(index2);

if(firstLastName==secondLastName) cout<<"ARE Brothers";
else cout<<"NOT";


}