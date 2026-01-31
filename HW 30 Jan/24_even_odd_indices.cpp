#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[1000];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i += 2) {
        cout << arr[i] << " ";
    }

    for (int i = 1; i < n; i += 2) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
