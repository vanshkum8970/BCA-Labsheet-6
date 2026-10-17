// Program 9: Subtract Two Matrices
#include <iostream>
using namespace std;

int main() {
    int a[2][2] = {{9, 8}, {7, 6}};
    int b[2][2] = {{1, 2}, {3, 4}};
    int diff[2][2];

    cout << "Difference Matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            diff[i][j] = a[i][j] - b[i][j];
            cout << diff[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
