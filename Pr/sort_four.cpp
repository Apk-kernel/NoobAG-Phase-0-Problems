#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int min_num = min(a,min(b,min(c,d)));
    cout<<min_num;
    int temp = a;
    a = min_num;
    min_num = temp;
    cout<<'\n'<<a;
    
    int min_num2 = min(b,min(c,d));
    cout<<'\n'<<a<<b<<c<<d;
    return 0;
}