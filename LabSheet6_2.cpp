// Program 2: Sum of All Elements in a 1D Array
#include <iostream>
using namespace std;

int main() {
    int arr[5], sum = 0;
    cout << "Enter 5 elements: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum = " << sum << endl;
    return 0;
}
