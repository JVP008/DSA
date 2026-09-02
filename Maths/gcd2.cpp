#include<bits/stdc++.h>
using namespace std;
void anotherone (int,int);
int main(){

    int n,m ;
    cin>>n>>m;

    if (n<0 || m<0){
        n = int (sqrt(n*n));
        m = int (sqrt(m*m));
    }
    anotherone(n,m);
    while(n>0 && m>0){
        if (n<m){
            m = m-n;
        }
        else{
            n=n-m;
        }
    }
    cout<<"GCD: "<<max(n,m)<<"\n";
    return 0;
}

void anotherone(int n,int m){
    while(n>0 && m>0){
        if (n==0 or m==0){
            break;
        }
        if (n>m){
            n = n%m;
        }
        else{
            m = m%n;
        }
    }
    cout<<"GCD: "<<max(n,m)<<"\n";
}