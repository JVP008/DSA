#include<bits/stdc++.h>
using namespace std;
/*
Pattern:
ABCDE
ABCD
ABC
AB
A
*/
int main (){
    int n ;
    cout<<"Enter N:";
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j = 0;j<=n-i;j++){
            cout<<char(65+j);
        }
        cout<<endl;
    }
}