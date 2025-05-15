#include <iostream>
using namespace std;

class Solution{
    public:

    int waterBottles(int numBottles, int numExchange){
        int allBottles = numBottles;

        while(numBottles >= numExchange){
            int newBottles = numBottles / numExchange;

            int remBottles = numBottles % numExchange;

            allBottles += newBottles;

            numBottles = newBottles + remBottles;
        }

        return allBottles;
    }
};

int main(){
    Solution sol;
    cout << "Total no.of Bottles :" << sol.waterBottles(7,2) << endl;
}