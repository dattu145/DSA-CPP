#include <iostream>
#include <vector>
using namespace std;

int maxWater(vector<int>& heights){
    int left = 0, right = heights.size()-1, maxWater = 0;
    while(left < right){
        int height = min(heights[left], heights[right]);
        int width = right - left;
        int area = height * width;

        maxWater = max(maxWater, area);
        if(heights[left] < heights[right]) left++;
        else right--;
    }
    return maxWater;
}

int main(){
    vector<int> heights = {1,4,2,6,10,5};
    cout << maxWater(heights) << endl;
    return 0;
}