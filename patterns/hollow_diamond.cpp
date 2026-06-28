#include<bits/stdc++.h>
using namespace std;
/*
Pattern:
    * 1st row - 0 space 
   * * 2nd row - 1 space 
  *   * 3rd row - 3 space
 *     * 4th row - 5 space 
  *   * 1st row - 3 spaces  
   * *
    *
*/
int main(){
    int n;
    cout<<"Enter N: \n";
    cin>>n;

    for (int i = 1;i<=n;i++){
        //outer_spcace/left_side_spaces!
        for (int j = 1;j<=n-i;j++){
            cout <<" ";
        }
        cout<<"*";
        //inner space!
        for (int j=1;j<=(i*2)-3;j++){
            cout<<" ";
        }
        if (i>1){
        cout<<"*";
        }
    cout<<endl;

    }
    for(int i = 1; i<n;i++){
     for (int j = 1;j<=i;j++){
            cout <<" ";
        }   
     cout<<"*";
     for (int j=1;j<= 2 * (n - i) - 3;j++){
            cout<<" ";
        }
     if (i<n-1)
     cout<<"*";
     cout <<endl;
    }
    return 0;
}