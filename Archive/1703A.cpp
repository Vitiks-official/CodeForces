#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    string s, ns;
    for (int i = 0; i < t; ++i){
        cin >> s;
        ns = "";
        for (auto x: s)
            ns += (char)tolower(x);
        if (ns == "yes")
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
}
