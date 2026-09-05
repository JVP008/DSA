#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 10;
    //Method 1 (sometimes uses nowadyas):
    int arr[n]= {1,2,2,2,4,5,6,3,5,6};
    // precompute
    int frequency [n] = {0};
    int most_frequent = 0;

    for (int i = 0;i<n;i++){
        frequency[arr[i]]+=1;
    }
    int max = 0;
    
    for (int i=0;i<n;i++){
        if (frequency[i]>max){
            max = frequency[i];
            most_frequent = arr[i];
        }
    }
    cout<<"Highest Frequency is: "<<max<<" for element: "<<most_frequent<<"\n";
    //Method 2:
    map<int,int>frequency2;
    int max2 =0;
    int most_frequent2 = 0;
    //precompute
    for (int i = 0;i<n;i++){
        frequency2[arr[i]]+=1;
        if (max2<frequency2[arr[i]]){
            max2 = frequency2[arr[i]];
            most_frequent2 = arr[i];
        }
    }
    cout<<"Highest Frequency is: "<<max2<<" for element: "<<most_frequent2;

    return 0;
}