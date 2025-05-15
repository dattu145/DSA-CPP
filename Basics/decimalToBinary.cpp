#include <iostream>
using namespace std;

int decToBinary(int decNum){
    int ans = 0;
    int pow = 1;

    while (decNum > 0){
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }

    return ans;
}


int main(){
    int decNum;
    cout << "Enter a Decimal : ";
    cin >> decNum;

    cout << "The binary of " << decNum << " is " << decToBinary(decNum) << endl;

    cout << "\nBinary from 1 to 10 :" << "\n\n";

    for(int i = 1; i<=10; i++){
        cout << decToBinary(i) << endl;
    }
}