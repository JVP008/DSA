#include<bits/stdc++.h>
using namespace std;


/* pattern :
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * */

int main()
{
    int n;
    cout<<"How many times you want the * to get print: ";
    cin>>n;
    int j=0;
    label:
    int i=1;
        do{
            cout<<"*"<<" ";
            i++;
        }while(i<=n);
        cout<<endl;
    j++;        
    if (j!=n){
    goto label;
    }
}

