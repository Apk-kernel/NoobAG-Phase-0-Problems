#include <bits/stdc++.h>
using namespace std;

int main() {
    long a,b;
    char c;
    cin>>a;
    cin>>c;
    cin>>b;
    switch (c)
    {
    case '+':
        cout<<a+b;
        break;
    case '-':
        cout<<a-b;
        break;
    case '*':
        cout<<a*b;
        break;
    case '/':
        cout<<a/b;
        break;
    
    default:
        break;
    }
    return 0;
}