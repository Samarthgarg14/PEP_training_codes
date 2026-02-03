#include<iostream>
using namespace std;
int main(){
    stack<char> st;
    string s="eldaal h laah eK";
    for(char c:s){
        st.push(c);
    }
    int i=0;
    while(!st.empty()){
        s[i]=st.top();
        st.pop();
        i++;
    }
    cout<<endl<<s<<endl<<endl;
    return 0;
}