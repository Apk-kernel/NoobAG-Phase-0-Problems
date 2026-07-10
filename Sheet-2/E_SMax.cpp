#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int max_num = INT_MIN;
    int smax_num = INT_MIN;
    int pos = 0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;

        if(x>max_num){
            //case 1
            smax_num = max_num;
            max_num=x;
            pos=i+1;
        }
        else if(x>=smax_num){
            //case 2
            smax_num = x;
        }
    }

    cout<<"Maximum_Number is : "<<max_num<<'\n';
    cout<<"Second Maximum Number is : "<<smax_num<<'\n';
    cout<<"Position : "<<pos<<'\n';
    return 0;
}