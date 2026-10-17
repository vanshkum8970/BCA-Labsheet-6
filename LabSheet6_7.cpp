// Program 7: Input and Display 2D Array (Matrix)
#include <iostream>
using namespace std;

int main() {
    int mat[2][2];
    cout << "Enter 4 elements of 2x2 matrix: ";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> mat[i][j];
        }
    }

    cout << "Matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
