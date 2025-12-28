#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    int l = 0, u = 0;
    string s;
    cin >> s;
    for (auto x: s)
        if (islower(x))
            ++l;
        else
            ++u;
    if (u > l)
        for (auto x: s)
            cout << (char)toupper(x);
    else
        for (auto x: s)
            cout << (char)tolower(x);
}
