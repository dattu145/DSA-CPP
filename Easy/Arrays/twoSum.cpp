// Approach 1 - less Efficient (O(n^2))

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution{
//     public:
//     vector<int> twoSum(const vector<int>& nums, int target){

//         for(int i = 0; i < nums.size(); i++){
//             for(int j = i+1; j < nums.size(); j++){
//                 if(nums[i] + nums[j] == target){
//                     return {i,j};
//                 }
//             }
//         }
//         return {};
//     }
// };

// void printArray(const vector<int>& v){
//         cout << "[";
//         for(int i : v){
//             cout << i << " ";
//         }
//         cout << "]";
// }

// int main(){
//     Solution sol;
//     vector<int> result = sol.twoSum({1,4,6,7},10);

//     printArray(result);
//     return 0;
// }

// Preferred Approach - Interview (O(n))

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    unordered_map<int, int> umap;
    for(int i = 0; i < nums.size(); i++){
        int complement = target - nums[i];

        if(umap.find(complement) != umap.end()){
            return {umap[complement], i};
        }

        umap[nums[i]] = i;
    }

    return {};
}

int main(){
    vector<int> nums = {1,2,3,4,5};
    int target = 8;
    vector<int> result = twoSum(nums, target);
    cout << "{" << result[0] << "," << result[1] << "}" << endl;
    return 0;
}