#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int mx = INT_MIN;
    int pos = 0;
    int cnt = 0;
    int smx = INT_MIN;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>mx){
            smx = x;
            mx = x;
            pos = 1;
            cnt = 1;
        }
        else if(x==mx){
            pos++;
            cnt++;
        }

        else if(x>smx){
            smx = x;
        }
    }

    cout<<"Maximum number : "<<mx<<'\n'<<"Second Maximum : "<<smx<<'\n'<<"Frequency of Max : "<<cnt<<'\n';
    return 0;
}