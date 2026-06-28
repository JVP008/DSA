#include<bits/stdc++.h>
using namespace std;
 /*
 Pattern:
    1
   121
  12321
 1234321
 */
int main(){

    int n ;
    cout<<"Enter N: ";
    cin >> n;

    for (int i = 1 ; i<=n;i++){
        for (int j = n-i;j>=1;j--){
            cout<<" ";
        }
        for (int j = 1;j<=i;j++){
            cout<<j<<" ";
        }
        for (int j = i-1; j > 0;j--){
            cout<<j<<" ";
        }
    cout<<endl;
    }
    return 0;
}