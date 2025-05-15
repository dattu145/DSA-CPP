#include <iostream>
using namespace std;

class Solution{
    public:
    bool powOfTwo(int n){
        if (n%2 == 0) return true;
        else return false;
    }
};

int main(){
    Solution sol;
    cout << sol.powOfTwo(3);
    return 0;
}