#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int cnt = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            cnt++;
        } else {
            cout << arr[i - 1] << " " << cnt << endl;
            cnt = 1;
        }
    }
    if (n > 0) {
        cout << arr[n - 1] << " " << cnt << endl;
    }
    return 0;
}
