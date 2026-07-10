#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin>>a;
    if(a<2)cout<<"-1\n";
    if(a%2==0){
        for(int i=1;i<a;i++){
            cout<<i*2<<'\n';
            if(i*2==a)break;
        }
    }
    else{
        for(int i=1;i<a;i++){
            cout<<i*2<<'\n';
            if(i*2==a-1)break;
        }
    }
    return 0;
}