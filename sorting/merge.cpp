#include<bits/stdc++.h>
using namespace std;
// [7,3,4,5,6,8,9,10,2,1] = i+j /2 
//so left half will be from i/start to mid
// and right will be from mid+1 to end/j 

void merge(int s,int mid,int e,vector<int> &arr){
    vector<int> temp;

    int left = s;
    int right = mid+1;
    while (left<=mid && right<=e){
        if (arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left+=1;
        }
        else{
            temp.push_back(arr[right]);
            right+=1;
        }
    }

    //if right index goes out of array
    while(left<=mid){
        temp.push_back(arr[left]);
        left+=1;
    }
    //if left index goes out of array
    while(right<=e){
        temp.push_back(arr[right]);
        right+=1;
    }

    for (int i = s;i<=e;i++){
        arr[i] = temp[i-s];
    }



}
void merge_sort(int s,int e,vector<int> &arr){
    //only one element
    if (s>=e){
        return;
    }
    int mid = (s+e)/2;
    merge_sort(s,mid,arr); //left half
    merge_sort(mid+1,e,arr); //right half
    merge(s,mid,e,arr);

}
int main (){
    vector<int>arr = {7,3,4,5,6,8,9,10,2,1,0};
    merge_sort(0,10,arr);
    for (auto i : arr){
        cout<<i<<" ";
    }
    return 0;
}
