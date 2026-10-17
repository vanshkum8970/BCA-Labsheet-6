// Program 13: Sort Names of Students Using Bubble Sort
#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[4] = {"Rohit", "Aman", "Vansh", "Deepak"};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 - i; j++) {
            if (names[j] > names[j + 1]) {
                string temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }

    cout << "Sorted Names: ";
    for (int i = 0; i < 4; i++) {
        cout << names[i] << " ";
    }
    cout << endl;
    return 0;
}
