#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProfit(vector<int>& prices){
    int maxProfit = 0;
    int minPrice = prices[0];

    for(int i = 0; i < prices.size(); i++){
        int profit = prices[i] - minPrice;
        maxProfit = max(maxProfit, profit);
        minPrice = min(minPrice, prices[i]);
    }

    return maxProfit;
}

int main(){
    vector<int> prices  = {7,4,5,3,6,4};
    cout << maxProfit(prices) << endl;
}