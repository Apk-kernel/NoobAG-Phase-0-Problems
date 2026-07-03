#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k, a;
    cin >> n >> k >> a;
    long long product = n * k;
    if (product % a != 0) cout << "double\n";
    else {
        long long result = product / a;
        if (result >= INT_MIN && result <= INT_MAX) cout << "int\n";
        else cout << "long long\n";
    }
    return 0;
}