#include <iostream>
using namespace std;

int linearSearch(int arr[],int size,int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            return i;
            break;
        }
    }
    return -1;
}

int main(){
    int arr[] = {4,76,2,6,90};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 4;

    cout << "Target is at index : " << linearSearch(arr,size,target) << endl;

    return 0;
}