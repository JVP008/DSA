#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    int count=0;
    cout<<"Enter N: ";
    cin >> n;
    
    // for (int i = 1;i<=n;i++){
    //     for (int i = 1;i<=n;i++){
    //         cout<<i<<" ";
    //     }
    // cout<<endl;
    // }
    
    label:
        int i = 1;
        do{
            cout<<i<<" ";
            i++;
        }while(i<=n);
        cout<<endl;
        i=1;
        count++;

    if (count!=5)
    {
    goto label;
    }
    return 0;
}
