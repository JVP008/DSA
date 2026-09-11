#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[],int n,int i){
    //base condition
    if (i==n){
        return;
    }
    int j = i;
    while (j>0 && arr[j]<arr[j-1]){
        int temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = temp;
        j-=1;
    }
    insertion_sort(arr,n,i+1);
}

int main(){

    int arr[10] = {10,9,8,7,6,5,3,4,2,1};
    int n = 10;
    insertion_sort(arr,n,1);
    for (int i :arr){
        cout<<i<<" ";
    }
    return 0;
}