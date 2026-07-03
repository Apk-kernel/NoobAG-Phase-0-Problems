#include <bits/stdc++.h>
using namespace std;

int main() {
    float a;
    cin>>a;
    if(int(a)-a == 0) cout <<"int "<<int(a);
    else cout<<"float "<<fixed<<setprecision(3)<<int(a)<<" "<<a-int(a);
    return 0;
}