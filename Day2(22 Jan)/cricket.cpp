#include <iostream>
using namespace std;

int main() {
    int r[10], total=0, ducks=0, best=0;

    for(int i=0;i<10;i++){
        cin >> r[i];
        total += r[i];
        if(r[i]==0) ducks++;
        if(r[i]>best) best=r[i];
    }

    double avg = total/10.0;

    cout << "Total: " << total
         << "\nDucks: " << ducks
         << "\nBest: " << best
         << "\nAvg: " << avg
         << "\nConsistent? " << (avg>30 ? "YES" : "NO");
}
