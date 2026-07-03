#include <bits/stdc++.h>
using namespace std;

int main() {
    long long eyes,mouths,body;
    cin>>eyes>>mouths>>body;

    // make d3 as much as possible
    long long d3 = min(eyes,mouths,body);
    eyes-=d3;
    mouths-=d3;
    body-=d3;

    //make d1 as much as possible

    long long d1 = min(eyes/2,body);

    cout << d3 + d1 <<'\n';

    return 0;
}