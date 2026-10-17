// Program 16: Count Number of Occurrences of an Element (Linear Search)
#include <iostream>
using namespace std;

int main() {
    int arr[7] = {5, 2, 5, 8, 5, 9, 1};
    int key = 5, count = 0;

    for (int i = 0; i < 7; i++) {
        if (arr[i] == key) {
            count++;
        }
    }

    cout << "Occurrences of " << key << ": " << count << endl;
    return 0;
}
