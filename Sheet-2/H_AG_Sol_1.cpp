/* #include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    if(n==1){
        cout<<"NO\n";
        return 0;
    }

    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"NO\n";
            return 0;
        }

    }
    cout<<"YES\n";
    return 0;
}

*/

/* #include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    if(n==1)cout<<"NO\n";return 0;
    bool isPrime = true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime=false;
            break;
        }
    }
    cout<<(isPrime ? "YES\n" : "NO\n");
    return 0;
} 
*/


// sqrt(N) operations

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    if(n==1){
        cout<<"NO\n";
        return 0;
    }

    bool isPrime = true;
    for(int i=2; i*i<n;i++){
        if(n%i==0){
            isPrime=false;
            break;
        }
    }
    cout<<(isPrime ? "YES\n" : "NO\n");
    return 0;
}