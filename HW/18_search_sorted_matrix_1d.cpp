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
    int s = 0;
    int e = n * m - 1;
    bool found = false;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        int r = mid / m;
        int c = mid % m;
        if (mat[r][c] == target) {
            found = true;
            cout << r << " " << c << endl;
            break;
        }
        if (mat[r][c] < target) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    if (!found) {
        cout << "Not Found" << endl;
    }
    return 0;
}
