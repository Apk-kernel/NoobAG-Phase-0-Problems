#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a,b;
    cin>>a>>b;
    cout<<int(a/b)<<'\n';
    if(int(a)%int(b)!=0){
        cout<<int(1+a/b)<<'\n';
    }
    else{
        cout<<int(a/b)<<'\n';
    }

    if(int(a)%int(b) > (int(b)/2)){
        if(int(a)%int(b)!=0){
            cout<<int(1+a/b)<<'\n';
        }
        else{
            cout<<int(a/b)<<'\n';
        }
    }
    else{
        cout<<int(a/b)<<'\n';
    }
}