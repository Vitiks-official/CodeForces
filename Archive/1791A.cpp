#include <iostream>
#include <set>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    set <char> s = {'c', 'o', 'd', 'e', 'f', 'o', 'r', 'c', 'e', 's'};
    int t;
    cin >> t;
    char c;
    for (int i = 0; i < t; ++i){
        cin >> c;
        if (s.count(c))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
