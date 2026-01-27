#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int mat[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }
    int maxDiff = -999999;
    for (int a = 0; a < n - 1; a++) {
        for (int b = 0; b < n - 1; b++) {
            for (int c = a + 1; c < n; c++) {
                for (int d = b + 1; d < n; d++) {
                    int val = mat[c][d] - mat[a][b];
                    if (val > maxDiff) {
                        maxDiff = val;
                    }
                }
            }
        }
    }
    cout << maxDiff << endl;
    return 0;
}
