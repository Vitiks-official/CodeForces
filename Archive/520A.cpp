#include <iostream>
#include <string>
#include <set>
#include <cctype>
using namespace std;

int main(){
    int n;
    string s;
    set <char> p;
    cin >> n >> s;
    for (auto x: s)
        p.insert(tolower(x));
    if (p.size() == 26)
        cout << "YES";
    else
        cout << "NO";


}
