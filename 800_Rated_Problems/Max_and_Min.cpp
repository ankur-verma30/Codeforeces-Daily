// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K

#include<iostream>
#include <limits.h>

using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int maxi=INT_MIN,mini=INT_MAX;

    //Finding the maximum
    if(a>=b && a>=c) maxi=a;
    else if(b>=c && b>=a) maxi=b;
    else maxi=c;

    //finding the minimum
    if(a<=b && a<=c) mini=a;
    else if(b<=c && b<=a) mini=b;
    else mini=c;

    cout<<mini<<" "<<maxi;


}