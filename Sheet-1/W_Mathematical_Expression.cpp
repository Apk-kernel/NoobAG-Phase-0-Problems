#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a,b,c;
    char d,e;
    cin>>a>>d>>b>>e>>c;
    switch (d)
    {
    case '+':
        if(a+b==c)cout<<"Yes\n";
        else cout<<a+b;
        break;
    case '-':
        if(a-b==c)cout<<"Yes\n";
        else cout<<a-b;
        break;
    case '*':
        if(a*b==c)cout<<"Yes\n";
        else cout<<a*b;
        break;
    case '/':
        if(a/b==c)cout<<"Yes\n";
        else cout<<a/b;
        break;
    default:
        break;
    }
    return 0;
}