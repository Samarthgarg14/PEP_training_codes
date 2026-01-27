#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int mat[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }
    int target;
    cin >> target;
    int i = 0;
    int j = m - 1;
    bool found = false;
    while (i < n && j >= 0) {
        if (mat[i][j] == target) {
            found = true;
            cout << i << " " << j << endl;
            break;
        }
        if (mat[i][j] > target) {
            j--;
        } else {
            i++;
        }
    }
    if (!found) {
        cout << "Not Found" << endl;
    }
    return 0;
}
