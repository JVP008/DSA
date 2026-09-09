#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n) //acting as a outer loop
{
    
    // check whether the arr has only 1 element (return if it is)
    // this is the base case. why ? see below!
    if (n == 1){
        return;
    }
    // key idea: bubble sort pushes the LARGEST element at/to the end.
    // after every full pass, one more element gets "locked in" as sorted at the end
    // so we don't have to check that position again
    // that's why we use n-1: it keeps the loop limited to only the unsorted window
    // each pass shrinks this window by 1. because, large element gets added 
    // to the sorted window every time.

    bool swapped = false;
    for (int j = 0; j < n-1; j++){
        int temp = 0;
        if (arr[j] > arr[j + 1])
        {
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
            swapped = true;
        }
    }
    if (swapped == false){ //base 2.0 condtion !!!
        return;
    }
    bubble_sort(arr,n-1); //pass array and size as it is -> (we will get sorted array);
}

int main()
{
    int arr[10] = {1, 8, 4, 11, 5, 4, 3, 2, 1, 0};
    bubble_sort(arr, 10);
    for (int i : arr){
        cout<<i<<" ";
    }
    return 0;

}
// bubble_sort(arr,10) -> bubble_sort()