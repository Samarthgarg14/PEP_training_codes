#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bool s = true;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            s = false;
            break;
        }
    }
    if (s) {
        cout << "Sorted" << endl;
    } else {
        cout << "Not Sorted" << endl;
    }
    return 0;
}
