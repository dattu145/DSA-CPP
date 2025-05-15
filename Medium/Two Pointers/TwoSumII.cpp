#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    int left = 0, right = nums.size()-1;
    while(left <  right){
        int sum = nums[left] + nums[right];
        if(sum == target) return {left+1, right+1};
        else if(sum < target) left++;
        else right--;
    }
    return {};
}

void printArray(vector<int>& arr){
    cout << "[ ";
    for(int i : arr){
        cout << i << " ";
    }
    cout << "]";
    cout << endl;
}

int main(){
    vector<int> nums = {1,2,4,5};
    int target = 7;
    vector<int> result = twoSum(nums, target);
    printArray(result);
    return 0;
}