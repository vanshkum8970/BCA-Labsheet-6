// Program 6: Search an Element in 1D Array (Without Functions)
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {11, 22, 33, 44, 55};
    int key, pos = -1;
    cout << "Enter element to search: ";
    cin >> key;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == key) {
            pos = i;
            break;
        }
    }

    if (pos != -1)
        cout << "Element found at index " << pos << endl;
    else
        cout << "Element not found" << endl;
    return 0;
}
