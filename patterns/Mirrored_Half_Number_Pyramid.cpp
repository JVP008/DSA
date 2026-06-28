#include<bits/stdc++.h>
using namespace std;

/*
Pattern:
1      1  logic for spaces : 2*(4-i)
12    21
123  321
12344321
*/
int main (){
    int n ;
    cout<<"Enter N: ";
    cin>>n;

    for (int i=1;i<=n;i++){
        //left
        for (int j = 1;j<=i;j++){
            cout<<j;
        }
        //space
        for (int j = 1;j<=2*(n-i);j++){
            cout<<" ";
        }
        //right
        for (int j=i;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
