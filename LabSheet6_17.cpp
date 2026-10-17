// Program 17: Check if a Number is Present or Not (Linear Search)
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {14, 28, 35, 42, 56};
    int num;
    bool found = false;

    cout << "Enter number to check: ";
    cin >> num;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == num) {
            found = true;
            break;
        }
    }

    if (found)
        cout << num << " is present in array." << endl;
    else
        cout << num << " is not present in array." << endl;
    return 0;
}
