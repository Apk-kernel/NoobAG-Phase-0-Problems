#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    while(cin>>a>>b){
        if(a<=0 || b<=0)break;
        if(b>a)swap(b,a);
        int sum = 0;
        for(int i=b;i<=a;i++){
            cout<<i<<" ";
            sum+=i;
        }
        cout<<"sum ="<<sum<<'\n';
    }
    return 0;
}