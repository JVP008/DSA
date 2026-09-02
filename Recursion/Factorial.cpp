#include<bits/stdc++.h>
using namespace std;
int Factorial(int n){
    if (n==1){
        return 1;
    }
    return n * Factorial(n-1); // 5*f(4)-> 4*f(3)-> 3*f(2)-> 2*f(1)-> 1;
                               //1->2->6->24->120
}
int main (){
    int n;
    cout<<"No. of times you want to print your name!:";
    cin>>n;
    cout<<Factorial(n);
    return 0;
}