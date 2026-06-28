#include<bits/stdc++.h>
using namespace std;

/*
Pattern :
123
456
789
*/

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int count = 1;
    for(int i = 0;i<n;i++)
    {
        for (int j=1;j<=n;j++){
            cout<<count<<" ";
            count+=1;
        }
        cout<<endl;
    }
    return 0;
}