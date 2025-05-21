#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums){
    if(nums.empty()) return 0;
    int slow = 0;
    for(int fast = 1; fast < nums.size(); fast++){
        if(nums[slow] != nums[fast]){
            slow++;
            nums[slow] = nums[fast];
        }
    }
    return slow + 1;
}

int main(){
    vector<int>nums = {1,1,2,3,3,4,5,5,6};
    cout << removeDuplicates(nums);
    return 0;
}