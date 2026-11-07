
//works only for 3x3 matrix or Square Matrix
#include<bits/stdc++.h>
using namespace std;
void binary_search(int arr[][3],int size,int key){
    int mid = size/2;
    for (int i = 0; i<size;i++){
        if (arr[mid][0]<=key && arr[mid][size] >= key){
            int m = 0;
            int l = 0;
            int h = 2;
            while (l<=h){
                m = (l+h)/2;
                if (arr[mid][m]==key){
                    cout<<"Found\n";
                    return;
                }
                else if (arr[mid][m] > key){
                    h = m - 1;
                }
                else{
                    l = m + 1;
                }
            }
        }
        else if (arr[mid][0]<key && arr[mid][size] < key){
            mid -=1;
        }
        else{
            mid+=1;
        }
    }
    cout<<"Not Found\n";

}
int main (){
    int arr[3][3] = {
        {1,2,3},
        {4,5,6}, //middle 
        {7,8,9},
    };
    int key = 3;
    binary_search(arr,2,key);
    return 0;
}
