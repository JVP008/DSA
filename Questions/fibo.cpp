#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 10;
    int fibo [n] = {0,1};
    for (int i=2;i<n;i++){
        fibo[i] = fibo[i-1]+fibo[i-2];
    }
    for (int fib :fibo){
        cout<<fib<<" ";
    }
    return 0;
}
