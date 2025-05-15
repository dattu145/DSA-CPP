#include <iostream>
using namespace std;

int binaryToDecimal(int binNum){
    int ans = 0;
    int pow = 1;

    while(binNum > 0){
        int rem = binNum % 10;
        ans += (rem * pow);
        binNum /= 10;
        pow *= 2;
    }

    return ans;
}

int main(){
    int binNum = 1101;

    cout << "Binary " << binNum << " to decimal is : " << binaryToDecimal(binNum) << endl;
    return 0;
}