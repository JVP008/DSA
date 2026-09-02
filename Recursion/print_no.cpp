#include<bits/stdc++.h>
using namespace std;
void print_n_times(int i ,int n){ // 1 2 3 4
    if (i>=n){
        return;
    }
    cout<<i<<endl;
    print_n_times(i+1,n);
    cout<<i<<endl;

}
int main (){
    int i=1,n;
    cout<<"Enter No! :"<<endl;
    cin>>n;
    print_n_times(i,n); 
    return 0;
}