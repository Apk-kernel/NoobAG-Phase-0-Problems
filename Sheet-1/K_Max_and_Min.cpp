#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a,b,c;
    cin>>a>>b>>c;
    long long d = max({a,b,c});
    long long e = min({a,b,c});
    cout<<e<<" "<<d<<'\n';
    return 0;
}