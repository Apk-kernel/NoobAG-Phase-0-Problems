// Euclidean GCD Algorithm
// T.C : O(log_2(n))

// (a,b) -> (b%a,a)

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a,b;
    cin>>a>>b;
    while(b!=0){
        long long temp = b;
        b = a%b;
        a = temp;
    }
    cout<<a<<'\n';
    return 0;
}

