#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    bool luckyFound = false;
    for(int i=a;i<=b;i++){
        int temp = i;
        bool isLucky = true;
        while(temp){
            int lastDigit = temp % 10;
            if(lastDigit!=4 && lastDigit!=7){
                isLucky = false;
                break;
            }
            temp = temp/10;
        }
        if(isLucky){
            cout<<i<<" ";
            luckyFound=true;
        }
    }
    if(!luckyFound)cout<<-1<<'\n';
    return 0;
}