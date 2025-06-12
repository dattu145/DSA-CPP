#include <iostream>
#include <vector>
using namespace std;

void plusOne(vector<int>& digits){
    int idx = digits.size()-1;
    while(idx >= 0){
        if(digits[idx] == 9){
            digits[idx] = 0;
        }
        else{
            digits[idx] += 1;
            break;
        }
        idx--;
    }
    digits.insert(digits.begin(), 1);
}

int main(){
    vector<int> digits = {9,9};
    plusOne(digits);

    for(int i : digits){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}