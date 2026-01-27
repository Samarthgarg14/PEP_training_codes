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
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }
    for (int i = 0; i < n; i++) {
        int s = 0;
        int e = n - 1;
        while (s < e) {
            int temp = mat[i][s];
            mat[i][s] = mat[i][e];
            mat[i][e] = temp;
            s++;
            e--;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
