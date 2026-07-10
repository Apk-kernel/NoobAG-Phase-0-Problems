#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int even=0;
    int odd=0;
    int pos=0;
    int neg=0;
    for(int i=0;i<t;i++){
        int a;
        cin>>a;
        if(a%2==0)even++;
        else odd++;

        if(a>0)pos++;
        else if (a<0)neg++;
    }


    cout<<"Even: "<<even;
    cout<<"\nOdd: "<<odd;
    cout<<"\nPositive: "<<pos;
    cout<<"\nNegative: "<<neg;

    return 0;
}