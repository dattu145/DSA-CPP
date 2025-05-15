#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec = {62,3,4};
    int target = 0;
    int result = -1;

    for(int i = 0; i < vec.size(); i++){
        if(vec[i] == target){
            result = i;
        }
    }

    cout << result << endl;
}