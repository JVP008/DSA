#include<bits/stdc++.h>
using namespace std;
void sum_of_n(int i ,int n,int org){
    if (i<1){  
    cout<<"Sum: "<<n-org;  //14-4; or
    //cout<<"Sum: "<< n ; if n+1 not if n+i;
    return;
    }
    sum_of_n(i-1,n+i,org);
}
int main (){
    int n;
    cout<<"Enter a No. ";
    cin>>n;
    sum_of_n(n,n,n);
    return 0;
}