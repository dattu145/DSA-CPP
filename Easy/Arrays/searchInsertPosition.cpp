#include <iostream>
#include <vector>
using namespace std;

int searchInsertPosition(vector<int>& nums, int target){
    for(int i = 0;i < nums.size(); i++){
        if(nums[i] >= target){
            return i;
        }
    }
    return nums.size();
}

int main(){
    vector<int> nums = {1,3,4,6};
    int target = 7;
    cout << searchInsertPosition(nums, target) << endl;
    return 0;
}