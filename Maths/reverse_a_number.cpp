#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cout<<"Enter N: ";
    cin>>n; // 45;
    size_t t = n;
    int reverse = 0;
    while(n!=0){
        int digit = n%10; //lsd
        reverse = reverse*10+digit; //0+5 = 5 
        n=n/10; // n = 4;
    }
    cout<<"Reverse: "<<reverse;
    return 0;
}