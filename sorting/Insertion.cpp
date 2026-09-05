#include <bits/stdc++.h>
using namespace std;
// suppose we have arr = [1,3,4,2,5] -> [1,2,3,4,5];
// In the insertion sort we kind of maintain a window (not the window with two pointers! ok).
// the moment we move forward to the right windows get bigger and bigger (ofc) and we
// then try to insert the elements which is in transit of getting placed in that window and for that
// we do following things (conditions):
// if the the element to be insert is bigger than then we shift the elements to the right and
// we compare the element_to_be_inserted with its immediate left till the left becomes smaller than
// the element to be inserted.
// for example : [1,3,4] is already in sorted manner and the our next element which is not part
// of the window is [2] so we will first compare 4 > 2 its smaller so shift left or swap the elements
// now check for 3 > 2 ; shift to the left , now for 1 < 2 here No swap i.e we got our all elements on
// correct postion (enjoy!)
int main()
{
    //Declaration & Input 
    int n;
    cin>>n;
    int arr[n];
    for (int i =0;i<n;i++){
        cin>>arr[i];
    }
    //logic
    for (int i=0;i<n-1;i++){ // going till n-1 so that we can compare last element with second last
        int j = i;
        while (j>0 && arr[j-1]>arr[j]){
            int temp = arr[j];
            arr[j]= arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
    //Sorted
    for (int i : arr){
        cout<<i<<" ";
    }
    return 0;
}