#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int a = 0, d = 0, n;
    cin >> n    >> s;
    for (auto x: s)
        if (x == 'A')
            ++a;
        else
            ++d;
    if (a > d)
        cout << "Anton";
    else if (d > a)
        cout << "Danik";
    else
        cout << "Friendship";
}
