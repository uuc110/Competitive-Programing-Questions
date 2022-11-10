#include <bits/stdc++.h>
using namespace std;

void countSort(int arr[], int n){

    //step 1: find the max element in the array
    int max = *max_element(arr, arr+n);

    //step 2: create a count array of size max+1
    int count[max+1];

    //step 3: initialize the count array with 0
    memset(count,0, sizeof(count));

    //step 4: store the count of each element in the count array
    for(int i=0; i< n; i++){
        count[arr[i]]++;
    }

    //step 5: store the cumulative sum of the count array
    for(int i=1; i< max+1; i++){
        count[i] = count[i] + count[i-1];
    }

    //step 6: create a temp array
    int output[n];

    //step 7: store the sorted elements in the temp array
    for(int i=n-1; i>=0;i--){
        output[--count[arr[i]]]= arr[i];
    }

    //step 8: copy the temp array to the original array
    for(int i=0; i< n; i++){
        arr[i] = output[i];
    }
}

void printArray(int arr[], int n){
    for(int i=0; i< n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){
    int arr[] = {1, 4, 1, 2, 7, 5, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    countSort(arr, n);
    cout << "Sorted array is \n";
    printArray(arr, n);
}