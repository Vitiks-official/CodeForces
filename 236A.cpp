#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main(){
    string s;
    unordered_set <char> us;
    cin >> s;
    for (auto x: s)
        us.insert(x);
    if (us.size() % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}
