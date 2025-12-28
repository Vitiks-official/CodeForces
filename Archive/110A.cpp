#include <iostream>
#include <string>
using namespace std;

int main(){
    string n;
    int k = 0;
    cin >> n;
    for (auto x: n)
        if (x == '4' || x == '7')
            ++k;
    if (k == 4 || k == 7)
        cout << "YES";
    else
        cout << "NO";

}
