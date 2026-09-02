#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    if (n==0){
        return 0;
    }
    return n + sum(n-1);

}
int main (){
    int n;
    cout<<"No. of times you want to print your name!: ";
    cin>>n; //5
    cout<<sum(n)<<endl;
    return 0;
}