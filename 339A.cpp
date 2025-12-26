#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){
    string s, ns = "";
    cin >> s;
    multiset <char> v;
    for (int i = 0; i < s.size(); i += 2)
        v.insert(s[i]);
    for (auto x: v)
        ns += x;
    for (int i = 0; i < ns.size() - 1; ++i)
        cout << ns[i] << "+";
    cout << ns[ns.size() - 1];
}
