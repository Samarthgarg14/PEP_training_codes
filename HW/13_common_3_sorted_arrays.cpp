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

    int n3;
    cin >> n3;
    int c[1000];
    for (int i = 0; i < n3; i++) cin >> c[i];

    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2 && k < n3) {
        if (a[i] == b[j] && b[j] == c[k]) {
            cout << a[i] << " ";
            i++; j++; k++;
        } else if (a[i] < b[j]) {
            i++;
        } else if (b[j] < c[k]) {
            j++;
        } else {
            k++;
        }
    }
    cout << endl;
    return 0;
}
