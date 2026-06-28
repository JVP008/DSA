#include<bits/stdc++.h>
using namespace std;

/*
Pattern to print!
*****
****
***
**
*
*/
int main()
{
    int n;
    cout<<"Enter N: ";
    cin>>n; 

    for (int i=1;i<=n;i++){
        for (int j=n;j>=i;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
