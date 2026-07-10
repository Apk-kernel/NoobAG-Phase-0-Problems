#include <bits/stdc++.h>
using namespace std;

/* int main() {
    int a;
    cin>>a;
    int maxnum=0;
    vector<int>arr(a);
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    cout<<arr[a-1];
    return 0;
}
*/


int main(){
    int a;
    cin>>a;
    int max_num = INT_MIN;
    for(int i=0;i<a;i++){
        int x;
        cin>>x;
        if(x>max_num)max_num=x;
    }
    cout<<max_num<<'\n';
}