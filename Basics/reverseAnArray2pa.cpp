//Reverse an Array using Two Pointer Approach;

#include <iostream>
using namespace std;

void reverseAnArray(int arr[],int size){
    int start = 0, end = size-1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[] = {3,5,1,8,9,2};
    int size = 6;

    reverseAnArray(arr,size);

    for(int i=0; i < size;i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}