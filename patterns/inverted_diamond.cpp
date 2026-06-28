#include<bits/stdc++.h>
using namespace std;
/*
Pattern:
********** row1 - 10stars
****  **** row2 - 8stars 
***    *** row3 - 6stars 3
**      ** row4 - 4stars  
*        * row5 - 2stars
*        *
**      **
***    ***
****  ****
**********
*/
int main (){
    int n ;
    cout<<"Enter N:";
    cin>>n;
    for (int i = 1;i<=n*2;i++){
    cout<<"*";
    }
    cout<<endl;
    for (int i=2;i<=n;i++){
        //left 
        for (int j=n-i+1;j>0;j--){
            cout<<"*";
        }
        //Spaces
        for (int j=1;j<=2*(i)-2;j++){
            cout<<" ";
        }
        //Right
        for (int j=n-i+1;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
        cout<<endl;
}
    