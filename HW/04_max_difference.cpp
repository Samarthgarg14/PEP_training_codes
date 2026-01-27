#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ans = arr[1] - arr[0];
    int min_val = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] - min_val > ans) {
            ans = arr[i] - min_val;
        }
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }
    cout << ans << endl;
    return 0;
}
