#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    vector<string>words1;
    string word1;
    stringstream ss1(s1);
    while(ss1>>word1)words1.push_back(word1);

    vector<string>words2;
    string word2;
    stringstream ss2(s2);
    while(ss2>>word2)words2.push_back(word2);

    if(words1[1] == words2[1]) cout<<"ARE Brothers\n";
    else cout<<"NOT\n";

    return 0;
}