#include<bits/stdc++.h>
using namespace std;
void reverse(int i,int* arr,int n){ 
    if (i==n){
        return;
    }
    reverse(i+1,arr,n);
    cout<<arr[i]<<" ";

}
int main (){
    int i=0,n=5;
    int arr [5]={1,2,3,4,5};
    reverse(i,arr,n);
    return 0;
}