#include <bits/stdc++.h>
using namespace std;

__int128 evaluate(__int128 a, __int128 b, __int128 c, char op1, char op2) {

    if (op1 == '*') {
        __int128 t = a * b;
        if (op2 == '+') return t + c;
        return t - c;
    }

    if (op2 == '*') {
        __int128 t = b * c;
        if (op1 == '+') return a + t;
        return a - t;
    }

    if (op1 == '+' && op2 == '-') return a + b - c;
    return a - b + c;
}

int main() {
    long long a, b, c;
    long long d;
    cin >> a >> b >> c >> d;

    vector<pair<char, char>> ops = {
        {'+', '-'},
        {'-', '+'},
        {'+', '*'},
        {'*', '+'},
        {'-', '*'},
        {'*', '-'}
    };

    for (auto [op1, op2] : ops) {
        if (evaluate(a, b, c, op1, op2) == (__int128)d) {
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";
    return 0;
}