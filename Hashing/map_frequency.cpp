#include<bits/stdc++.h>
using namespace std;
int main (){
    int n ;
    cin>>n;
    int arr[n];
    //take input of which you want to count frequencies of.
    for (int i =0;i<n;i++){
        cin>>arr[i];
    }
    //precompute 
    map<int,int>frequency;
    for (int i =0;i<n;i++){
        frequency[arr[i]]+=1;
    }
    
    //print
    for (auto it : frequency){
        cout<<it.first<<" "<<it.second<<"\n";
    }

    return 0;
}