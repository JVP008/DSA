#include<bits/stdc++.h>
using namespace std;
void print_n_times(int i ,int n){
    if (i<1){
        return;
    }
    cout<<i<<endl;
    print_n_times(i-1,n);

}
int main (){
    int i=0,n;
    cout<<"No. of times you want to print your name!:";
    cin>>n;
    print_n_times(i+n,n);
    return 0;
}