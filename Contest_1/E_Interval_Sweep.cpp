#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    if(a==0 && b==0) cout <<"NO\n";
    else if(a-b == 1 || a-b == 0 || b-a == 1 || b-a == 0) cout<<"YES\n";
    else cout <<"NO\n";
    return 0;
}