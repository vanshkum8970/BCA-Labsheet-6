// Program 14: Linear Search in 1D Array
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 25, 30, 45, 50};
    int target = 45, index = -1;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == target) {
            index = i;
            break;
        }
    }

    if (index != -1)
        cout << "Element " << target << " found at index " << index << endl;
    else
        cout << "Element not found" << endl;
    return 0;
}
