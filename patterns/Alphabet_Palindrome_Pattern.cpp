#include<bits/stdc++.h>
using namespace std;
/*
Pattern:
A
ABA
ABCBA
ABCDCBA
*/
int main (){
    int n ;
    cout<<"Enter N:";
    cin>>n;

    for(int i = 1;i<=n;i++){
        //left 
        for (int j = 0;j<i;j++){
            cout<<char(65+j);
        }
        //right 
        for (int j=i;j>1;j--){
            cout<<char(65+j-2);
        }
        cout<<endl;
    }
    }