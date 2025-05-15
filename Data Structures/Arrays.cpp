#include <iostream>
using namespace std;

int main(){
    int arr[] = {2,4,6,8,10};
    
    for(int i = 0; (i < sizeof(arr)/sizeof(arr[0])); i++){
        cout << arr[i] << endl;
    }
    
    return 0;
}