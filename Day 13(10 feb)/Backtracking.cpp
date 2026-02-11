#include <iostream>
using namespace std;

void permute(string &s, int idx) {
    if (idx == s.size()) {
        cout << s << endl;
        return;
    }
    for (int i = idx; i < s.size(); i++) {
        swap(s[idx], s[i]);
        permute(s, idx + 1);
        swap(s[idx], s[i]); 
    }
}

int main() {
    string s = "ABC";
    permute(s, 0);
}
