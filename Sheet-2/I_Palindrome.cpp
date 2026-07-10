#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a;
    cin>>a;
    long long og = a;
    long long rev = 0;
    while (a>0){
        rev = rev*10 + (a%10);
        a=a/10;
    }
    cout<<rev<<'\n';
    if(rev==og){
        cout<<"YES\n";
    }
    else cout<<"NO\n";
    return 0;
}