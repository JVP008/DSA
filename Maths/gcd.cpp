#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n,m;
    cout<<"Enter N & M: ";
    cin>>n>>m; 
    int gcd= 0;
    int minn = min(n,m);
    for(int i = minn;i>0;i--){
        if (n%i==0 && m%i==0){
            gcd = i;
            break;
        }
    }
cout<<"GCD: "<<gcd;

    return 0;
}