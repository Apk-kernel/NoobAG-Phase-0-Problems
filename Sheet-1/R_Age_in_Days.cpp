#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a;
    cin>>a;
    long long years = a/365;
    long long months = (a%365)/30;
    long long days = (a%365)%30;
    cout<<years<<" years\n";
    cout<<months<<" months\n";
    cout<<days<<" days\n";

    return 0;
}