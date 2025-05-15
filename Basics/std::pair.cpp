// Program to return Sum and Product of all elements in an array

#include <iostream>
#include <utility> // for std::pair

using namespace std;

pair<int, int> sumAndProduct(int arr[], int size) {
    int sum = 0;
    int product = 1;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
        product *= arr[i];
    }

    return make_pair(sum, product);
}

int main() {
    int arr[] = {2, 5, 2};
    int size = 3;

    pair<int, int> result = sumAndProduct(arr, size);

    cout << "Sum: " << result.first << endl;
    cout << "Product: " << result.second << endl;

    return 0;
}