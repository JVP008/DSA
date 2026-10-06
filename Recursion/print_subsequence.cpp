#include<bits/stdc++.h>
using namespace std;

void subseq (int i,vector<int>&v,int arr[],int n){
    if (i==n){
        for (auto it : v){
            cout<<it<<" ";
        }
        cout<<"\n";
        return ;
    }
    //if picked
    subseq(i+1,v,arr,n);
    v.push_back(arr[i]);
    // if not picked 
    subseq(i+1,v,arr,n);
    v.pop_back();
}

int  main (){
    int arr[3] = {1,2,3};
    vector<int>v(0);
    subseq(0,v,arr,3);
    return 0;
}
