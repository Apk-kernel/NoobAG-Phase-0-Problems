#include <bits/stdc++.h>
using namespace std;

long long fac(long long num){
    if(num<=1) return 1;
    return num * fac(num-1);
}

int main() {
    long long n;
    cin>>n;
    vector<long long> num(n);
    for(long long i=0;i<n;i++){
        cin>>num[i];
    }

    for(long long i=0;i<n;i++){
        cout<<fac(num[i])<<'\n';
    }

    return 0;
}