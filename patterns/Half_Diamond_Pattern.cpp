#include<bits/stdc++.h>
using namespace std;
/*
Pattern:
*
**
***
****
***** row 5 - 5 star 
**** row 1 - 4 star
***
**
*
*/
int main()
{
    int n ;
    cout<<"Enter N:";
    cin>>n;

    for (int i=1;i<=n;i++){
        for (int j =1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i=1;i<n;i++){
        for (int j=n-i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
