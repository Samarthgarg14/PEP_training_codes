#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    int mat[100][100];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> mat[i][j];
        }
    }
    int top = 0, bottom = r - 1;
    int left = 0, right = c - 1;
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            cout << mat[top][i] << " ";
        }
        top++;
        for (int i = top; i <= bottom; i++) {
            cout << mat[i][right] << " ";
        }
        right--;
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                cout << mat[bottom][i] << " ";
            }
            bottom--;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << mat[i][left] << " ";
            }
            left++;
        }
    }
    cout << endl;
    return 0;
}
