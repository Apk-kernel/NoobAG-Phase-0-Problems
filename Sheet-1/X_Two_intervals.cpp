#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    if(max(a,c)>min(b,d))cout<<"-1\n";
    else cout<<max(a,c)<<" "<<min(b,d)<<'\n';
    return 0;
}