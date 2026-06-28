#include<bits/stdc++.h>
using namespace std;

/*
Pattern:
*          *  row 1 - 2 stars
**        **  row 2 - 4 stars 
***      ***  row 3 - 6 stars
****    ****  row 4 - 8 stars 
*****  *****  row 5 - 10 stars
************  row 6 - 12 stars 
*****  *****  row 1 - 2 stars
****    ****  row 2 - 4 stars
***      ***  row 3 - 6 stars
**        **  row 4 - 8 stars
*          *  row 5 - 10 stars 
*/

int main(){
    int n;
    cout<<"Enter N: \n";
    cin>>n;
    //Upper section!
    for (int i = 1;i<=n;i++ ){
        //left side stars
        for (int j = 1;j<=i;j++){
            cout<<"*";
        }
        //inner spaces
        for (int j = 1; j<= 2*(n-i);j++ ){
            cout<<" ";
        }
        //right side stars
        for (int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    //middle line stars
    // for (int j=1;j<=n*2;j++){
    //      cout<<"*";
    //  }
    // cout<<endl;

    // Bottom Section
    for(int i=1;i<n;i++){
        // left side stars 
        for (int j = 1;j<=n-i;j++){
            cout<<"*";
        }
        //inner spaces
        for (int j = 1; j<= 2*i;j++ ){
            cout<<" ";
        }
        // rights side stars 
        for (int j=n-i;j>=1;j--){
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;

}