#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin>>a;
    int b = a%10;
    int c = a/10;
    if(c!=0 && b%c==0)cout<<"YES\n";
    else if(b!=0 && c%b==0)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}