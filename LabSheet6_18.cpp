// Program 18: Binary Search for an Array of Integers
#include <iostream>
using namespace std;

int main() {
    int arr[6] = {2, 6, 12, 18, 25, 30};
    int val = 18;
    int start = 0, end = 5, mid, ans = -1;

    while (start <= end) {
        mid = (start + end) / 2;
        if (arr[mid] == val) {
            ans = mid;
            break;
        } else if (arr[mid] < val) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    if (ans != -1)
        cout << "Integer " << val << " found at index: " << ans << endl;
    else
        cout << "Integer not found" << endl;
    return 0;
}
