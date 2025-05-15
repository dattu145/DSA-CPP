#include <iostream>
using namespace std;

void swapMaxMin(int arr[], int size) {
    int minIndex = 0, maxIndex = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    swap(arr[minIndex], arr[maxIndex]);
}

int main() {
    int arr[] = {3, 5, 6, 2, 8, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    swapMaxMin(arr, size);

    cout << "Array after swapping max and min: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
