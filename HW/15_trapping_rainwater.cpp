#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int left[1000];
    int right[1000];
    left[0] = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > left[i-1]) left[i] = arr[i];
        else left[i] = left[i-1];
    }
    right[n-1] = arr[n-1];
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > right[i+1]) right[i] = arr[i];
        else right[i] = right[i+1];
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int h = left[i];
        if (right[i] < h) h = right[i];
        ans += (h - arr[i]);
    }
    cout << ans << endl;
    return 0;
}
