#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){
    string s;
    set <char> st;
    getline(cin, s);
    for (int i = 1; i < s.size() - 1; i += 3)
        st.insert(s[i]);
    cout << st.size();
}
