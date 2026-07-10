#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x==0){
            cout<<0<<'\n';
            continue;
        }
        while(x){
            cout<<x%10<<" ";
            x/=10;
        }
        cout<<'\n';
    }
    return 0;
}