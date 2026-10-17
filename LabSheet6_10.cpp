// Program 10: Multiply Two Matrices
#include <iostream>
using namespace std;

int main() {
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{1, 0}, {0, 1}};
    int prod[2][2] = {0};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                prod[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << "Product Matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << prod[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
