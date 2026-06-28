#include<bits/stdc++.h>
using namespace std;
/*
Pattern:
A
AB
ABC
ABCD
ABCDE
*/
int main(){
    int n;
    cout<<"Enter N: \n";
    cin>>n;

cout<<"Pattern 1:\n";
    for (int i = 1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<char(j+65);
        }
        cout<<endl;
    }
cout<<endl;
/*
Pattern:
ABCDE
ABCD
ABC
AB
A
*/
cout<<"Pattern 2:\n";
for (int i = n;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<char(j+65);
        }
        cout<<endl;
    }
    return 0;
}
