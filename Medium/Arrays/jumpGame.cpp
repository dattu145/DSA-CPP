#include <iostream>
#include <vector>
using namespace std;

/*

bool canJump(vector<int>& nums){
    int n = nums.size();
    int goal = n-1;
    for(int i = n-2; i >= 0; --i){
        if(i + nums[i] >= goal){
            goal = i;
        }
    }

    return (goal == 0 ? true : false);
}

int main(){
    vector<int> nums = {3,2,1,0,4};
    cout << canJump(nums) << endl;
    return 0;
}

*/

// Approach 2 - 

bool canJump(vector<int>& nums){
    int maxReachable = 0;

    for(int i = 0; i < nums.size(); i++){
        if(i > maxReachable){
            return false; // can't move beyond this point;
        }
        maxReachable = max(maxReachable, i + nums[i]);
    }

    return true;
}

int main(){
    vector<int> nums = {3,2,1,0,4};
    cout << canJump(nums) << endl;
    return 0;
}

