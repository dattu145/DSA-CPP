#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {1,4,5,2,3};
    unordered_set<int> seen;
    bool result = false;

    for(int i : nums){
        if(seen.count(i)){
            result = true;
        }
        seen.insert(i);
    }
    
    cout << result << endl;
    return 0;
}