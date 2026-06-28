#include<bits/stdc++.h>
using namespace std;
/*
Pattern:
    * row 1 - star 1
   *** row 2 - star 3
  ***** row 3 - star 5
 ******* row 4 - star 7
********* row 5 - star 9
 ******* row 1 - star 7
  *****  row 2 - star 5
   *** row 3 - star 3
    * row 4 start 1
*/

// pattern is - odd numbers getting printed 
// formula :
// 2*i-1


int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;

    for (int i = 1;i<=n;i++){
        //outer spaces
        for (int j = 1;j<n-i+1;j++){
            cout<<" ";
        }
        //stars
        for(int j =1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i = 0;i<=n;i++){
        for (int j = 1;j<=i;j++){
            cout<<" ";
        }
        for (int j = 2*(n-i)-1;j>=1;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}