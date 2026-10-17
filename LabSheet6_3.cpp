// Program 3: Maximum and Minimum Element in a 1D Array
#include <iostream>
using namespace std;

int main() {
    int arr[5];
    cout << "Enter 5 elements: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int maxVal = arr[0], minVal = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > maxVal) maxVal = arr[i];
        if (arr[i] < minVal) minVal = arr[i];
    }

    cout << "Maximum = " << maxVal << endl;
    cout << "Minimum = " << minVal << endl;
    return 0;
}
