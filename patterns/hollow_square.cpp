#include<bits/stdc++.h>
using namespace std;
/*
Pattern:
****
*  *
*  *
****
*/
int main()
{
    int n ;
    cout<<"Enter N:";
    cin>>n;

    for (int i=1;i<=n;i++){
        cout<<"*";
    }
    cout<<endl;
    for (int i=1;i<=n-2;i++){
        //left
        cout<<"*";
        //spaces
        for (int i = 1;i<=n-2;i++){
            cout<<" ";
        }
        //right
        cout<<"*";
        cout<<endl;
        
    }
    for (int i=1;i<=n;i++){
     cout<<"*";   
    }

    return 0;
}
