#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int cnt = 0;
    // let's try and count the divisors

    for(int i=1;i<=n;i++){
        if(n%i==0)cnt++;
    }
    cout <<(cnt==2 ? "YES" : "NO")<<'\n';
    return 0;
}