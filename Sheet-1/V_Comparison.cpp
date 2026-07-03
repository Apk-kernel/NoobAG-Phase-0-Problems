#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    char ch;
    cin>>a>>ch>>b;
    switch (ch)
    {
    case '>':
        if(a>b)cout<<"Right\n";
        else cout<<"Wrong\n";
        break;
    case '<':
        if(a<b)cout<<"Right\n";
        else cout<<"Wrong\n";
        break;
    case '=':
        if(a==b)cout<<"Right\n";
        else cout<<"Wrong\n";
        break;
    
    default:
        break;
    }
    return 0;
}