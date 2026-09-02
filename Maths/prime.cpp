#include<bits/stdc++.h>
using namespace std;

bool isprime(int n){
    if (n<=1){
        return false;
    }
    else if (n==2){ //2 is prime cuz its divisible only by one and itself;
        return true;
    }
    else{
        for (int i=3;i<=n/2;i++){
            if (n%2==0){
                return false;
            }
            if (n%i==0){
                return false; 
            }
        }
        return true;
    }
}

int main(){
    
    int n;
    cout<<"Enter N: ";
    cin>>n; 

    isprime(n) ? cout<<"Prime" : cout<<"Not Prime";

    return 0;
}