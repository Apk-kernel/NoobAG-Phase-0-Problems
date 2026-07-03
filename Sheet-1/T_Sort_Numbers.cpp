#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<long long>nums(3);
    for(int i=0;i<3;i++){
        cin>>nums[i];
    }
    vector<long long>nums1(3);
    for(int i=0;i<3;i++){
        nums1[i]=nums[i];
    }
    sort(nums.begin(),nums.end());
    for(int i=0;i<3;i++){
        cout<<nums[i]<<'\n';
    }
    cout<<'\n';
    for(int i=0;i<3;i++){
        cout<<nums1[i]<<'\n';
    }
    return 0;
}