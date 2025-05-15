#include <iostream>
using namespace std;

void allPrime(int num){
    cout << "Prime numbers (2 - " << num << ") are: ";
    
    for(int i = 2; i <= num; i++){
        bool isPrime = true;

        for(int j = 2; j * j <= i; j++){
            if(i % j == 0){
                isPrime = false;
                break;
            }
        }

        if(isPrime){
            cout << i << " ";
        }
    }

    cout << endl;
}

int main(){
    allPrime(11);
    return 0;
}
