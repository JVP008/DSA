#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cout<<"Enter N: ";
    cin>>n;
    size_t t = n;
    int k = 3;
    int sum=0;
    while(n>0){
        int digit = n%10; 
        sum += round(pow(digit,k));
        n=n/10; 
    }
    if (sum==t){
        cout<<"Armstrong";
    }
    else{
        cout<<"Not Armstrong";
    }
    return 0;
}