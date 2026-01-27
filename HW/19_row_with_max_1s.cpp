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
    int idx = -1;
    int max1 = -1;
    for (int i = 0; i < r; i++) {
        int count = 0;
        for (int j = 0; j < c; j++) {
            if (mat[i][j] == 1) {
                count = c - j;
                break;
            }
        }
        if (count > max1) {
            max1 = count;
            idx = i;
        }
    }
    cout << idx << endl;
    return 0;
}
