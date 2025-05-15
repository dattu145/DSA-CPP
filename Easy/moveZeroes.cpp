#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums){
    int nonZeroIndex = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] != 0){
            swap(nums[i], nums[nonZeroIndex]);
            nonZeroIndex++;
        }
    }
}

int main(){
    vector<int> nums = {1,0,4,0,3};
    moveZeroes(nums);

    for(int i : nums){
        cout << i << endl;
    }
    
    return 0;
}