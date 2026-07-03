#include <bits/stdc++.h>
using namespace std;

int main() {
    char ch;
    cin>>ch;
    if(ch >= '0' && ch<='9') cout<<"IS DIGIT\n";
    else if(ch>='A' && ch<='Z') cout<<"ALPHA\nIS CAPITAL\n";
    else if(ch>='a' && ch<='z') cout<<"ALPHA\nIS SMALL\n";
    return 0;
}