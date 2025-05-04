#include <iostream>
using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    string output="NO";

    if(a+b-c==d) output="YES";
    if(a+b*c==d) output="YES";
    if(a-b+c==d) output="YES";
    if(a-b*c==d) output="YES";
    if(a*b+c==d) output="YES";
    if(a*b-c==d) output="YES";
    cout<<output;
}
