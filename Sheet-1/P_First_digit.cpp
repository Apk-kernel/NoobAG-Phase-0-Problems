#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a;
    cin>>a;
    while(a>=10){
        a/=10;
    }
    if(a%2==0)cout<<"EVEN\n";
    else cout<<"ODD\n";
    return 0;
}