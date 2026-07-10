#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    int wrong=0;
    do{
        cin>>a;
        wrong++;
    }
    while(a!=1999);
    for(int i=0;i<wrong-1;i++){
        cout<<"Wrong\n";
    }
    cout<<"Correct\n";
    return 0;
}