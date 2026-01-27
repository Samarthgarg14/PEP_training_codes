#include <iostream>
#include <algorithm>
using namespace std;

struct Interval {
    int start;
    int end;
};

bool cmp(Interval i1, Interval i2) {
    return i1.start < i2.start;
}

int main() {
    int n;
    cin >> n;
    Interval arr[1000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i].start >> arr[i].end;
    }
    sort(arr, arr + n, cmp);
    int index = 0;
    for (int i = 1; i < n; i++) {
        if (arr[index].end >= arr[i].start) {
            if (arr[index].end < arr[i].end)
                arr[index].end = arr[i].end;
        } else {
            index++;
            arr[index] = arr[i];
        }
    }
    for (int i = 0; i <= index; i++) {
        cout << arr[i].start << " " << arr[i].end << endl;
    }
    return 0;
}
