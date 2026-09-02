#include<bits/stdc++.h>
using namespace std;
void reverse(int i,int* arr,int j){ 
    if (i>=j){
        return; 
    }
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    reverse(i+1,arr,j-1);
}
int main (){
    int i=0,j=4;
    int arr [5]={2,6,3,8,3};
    reverse(i,arr,j);
    for (int a:arr){
        cout<<a<<" ";
    }
    return 0;
}