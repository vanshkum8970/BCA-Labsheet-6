// Program 19: Binary Search for Floating-Point Numbers
#include <iostream>
using namespace std;

int main() {
    float arr[5] = {1.2f, 2.5f, 3.8f, 4.6f, 5.9f};
    float target = 3.8f;
    int low = 0, high = 4, mid, pos = -1;

    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == target) {
            pos = mid;
            break;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (pos != -1)
        cout << "Float " << target << " found at index " << pos << endl;
    else
        cout << "Float not found" << endl;
    return 0;
}
