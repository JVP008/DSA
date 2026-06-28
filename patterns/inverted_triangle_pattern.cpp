#include<bits/stdc++.h>
using namespace std;

/*
1111
222
33
4
*/
int main(){

    int n ;
    cout<<"Enter N: ";
    cin>>n;

    for (int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=1;j<=n-i;j++){
            cout<<i+1;
        }
    cout<<endl;
    }

    return 0;
}