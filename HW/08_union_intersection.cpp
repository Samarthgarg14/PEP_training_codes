#include <iostream>
using namespace std;

int main() {
    int n1;
    cin >> n1;
    int a[1000];
    for (int i = 0; i < n1; i++) cin >> a[i];

    int n2;
    cin >> n2;
    int b[1000];
    for (int i = 0; i < n2; i++) cin >> b[i];

    int i = 0, j = 0;
    cout << "Union: ";
    while (i < n1 && j < n2) {
        if (i > 0 && a[i] == a[i-1]) { i++; continue; }
        if (j > 0 && b[j] == b[j-1]) { j++; continue; }
        if (a[i] < b[j]) {
            cout << a[i] << " ";
            i++;
        } else if (b[j] < a[i]) {
            cout << b[j] << " ";
            j++;
        } else {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
    while (i < n1) {
        if (i == 0 || a[i] != a[i-1]) cout << a[i] << " ";
        i++;
    }
    while (j < n2) {
        if (j == 0 || b[j] != b[j-1]) cout << b[j] << " ";
        j++;
    }
    cout << endl;

    i = 0; j = 0;
    cout << "Intersection: ";
    while (i < n1 && j < n2) {
        if (a[i] < b[j]) {
            i++;
        } else if (b[j] < a[i]) {
            j++;
        } else {
            if (i == 0 || a[i] != a[i-1]) cout << a[i] << " ";
            i++;
            j++;
        }
    }
    cout << endl;
    return 0;
}
