#include<bits/stdc++.h>
using namespace std;
int main()
{

    //Majuscule:
    // A B C 
    // A B C 
    // A B C 


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
    // Minuscule:
    // a b c 
    // a b c 
    // a b c
    cout<<"Minuscule\n";
    for (int i=0;i<n;i++){
        for (int i=0;i<n;i++){
            cout<<char(97+i)<<" ";
    }
    cout<<endl;
    }
    return 0;
}

