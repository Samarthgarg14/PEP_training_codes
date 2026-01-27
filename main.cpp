#include<iostream>
using namespace std;

int myAtoi(string s) {
    return 0;
}
void quicksort(int arr[]){
}
void radixsort(int arr[]){
    int n = 0;
    while (arr[n] != '\0') n++;

    int maxNum = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxNum) maxNum = arr[i];
    }

    for (int exp = 1; maxNum / exp > 0; exp *= 10) {
        int output[n];
        int count[10] = {0};
        
        for (int i = 0; i < n; i++)
            count[(arr[i] / exp) % 10]++;
        
        for (int i = 1; i < 10; i++)
            count[i] += count[i - 1];
        
        for (int i = n - 1; i >= 0; i--) {
            output[count[(arr[i] / exp) % 10] - 1] = arr[i];
            count[(arr[i] / exp) % 10]--;
        }
        
        for (int i = 0; i < n; i++)
            arr[i] = output[i];
    }
}
int main() {
    cout << myAtoi("0-1");
}
