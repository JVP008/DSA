#include <iostream>
using namespace std;
void minmax(int* ptr,int &min,int &max){
    for (int i = 0;i<5;i++){
        if (*(ptr+i)<min){
            min = *(ptr+i);
        }
        else if (max < (*ptr+1)){
            max = *(ptr+i);
        }
    }
}
int main()
{
    int arr[5] = {1,-1999,-1,919,567};
    int min = arr[0];
    int max = arr[0];
    
    minmax(arr,min,max);
    cout<<"Min: "<<min<<endl<<"Max: "<<max<<endl;
    for (int i:arr){
        cout<<i<<" ";
    }

    return 0;
}
