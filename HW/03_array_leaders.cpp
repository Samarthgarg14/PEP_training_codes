#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        bool lead = true;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] >= arr[i]) {
                lead = false;
                break;
            }
        }
        if (lead) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
