#include <iostream>
using namespace std;

int main() {
    int m[50] = {95, 45, 72, 66, 88, 91, 34, 79, 70, 68,
                85, 60, 74, 55, 99, 41, 73, 62, 77, 20,
                83, 69, 71, 58, 92, 39, 76, 64, 81, 67,
                90, 52, 75, 63, 87, 48, 93, 40, 78, 65,
                84, 59, 96, 33, 80, 57, 89, 46, 97, 50};

    int passCount = 0;

    cout << "Passed : ";
    for(int i=0;i<50;i++){
        if(m[i] > 70){
            cout << m[i] << " ";
            passCount++;
        }
    }
    cout<<endl;
    cout << "Pass count: " << passCount << "\n";

    int idx = 0;
    for(int i=0;i<50;i++){
        if(m[i] > 70){
            swap(m[i], m[idx]);
            idx++;
        }
    }

    cout << "After arranging: ";
    for(int i=0;i<50;i++) cout << m[i] << " ";
}
