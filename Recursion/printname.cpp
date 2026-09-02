#include<bits/stdc++.h>
using namespace std;
void print_n_times(int i ,int n){ //1 2 3 4 5 6.
    if (i>n){
        return;
    }
    cout<<"Jayesh"<<endl;
    print_n_times(i+1,n);

}
int main (){
    int i=1,n;
    cout<<"No. of times you want to print your name!:";
    cin>>n;
    print_n_times(i,n);
    return 0;
}