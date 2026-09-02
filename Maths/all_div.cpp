#include<bits/stdc++.h>
using namespace std;
void all_div(vector<int> &v,int n){

for(int i= 1;i<=n;i++){
        if (n%i==0){
            v.emplace_back(i);
        }   
    }
}
int main(){

    int n;
    cout<<"Enter N: ";
    cin>>n; 
    vector<int> v ;
    all_div(v,n);
    for (int i:v){
        cout<<i<<" ";
    }

    return 0;
}   