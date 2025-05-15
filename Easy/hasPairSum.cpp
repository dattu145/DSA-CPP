#include <iostream>
#include <vector>
using namespace std;

bool hasPairSum(vector<int>& arr, int target){
    int left=0; int right = arr.size()-1;
    while(left < right){
        int sum = arr[left] + arr[right];
        if(sum == target) return true;
        else if(sum < target) left++;
        else right--;
    }
    return false;

}

int main(){
    vector<int> arr = {1,2,3,6,8};
    int target = 8;
    cout << hasPairSum(arr,target) << endl;
    return 0;
}