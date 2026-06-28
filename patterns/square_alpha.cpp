#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<"Majuscule\n";
    for (int i=0;i<n;i++){
        for (int i=0;i<n;i++){
            cout<<char(65+i)<<" ";
    }
    cout<<endl;
    }

    cout<<endl;
    cout<<"Minuscule\n";
    for (int i=0;i<n;i++){
        for (int i=0;i<n;i++){
            cout<<char(97+i)<<" ";
    }
    cout<<endl;
    }
    return 0;
}

