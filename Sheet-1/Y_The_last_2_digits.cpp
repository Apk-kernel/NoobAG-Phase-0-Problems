#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    long long answer = 1;
    answer = (answer * (a%100))%100;
    answer = (answer * (b%100))%100;
    answer = (answer * (c%100))%100;
    answer = (answer * (d%100))%100;
    if (answer < 10)
    cout << "0";
    cout<<answer<<'\n';
    return 0;
}