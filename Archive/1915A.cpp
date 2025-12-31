#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, a, b, c;
    cin >> t;
    while (t--){
        cin >> a >> b >> c;
        if (a == b)
            cout << c << "\n";
        if (b == c)
            cout << a << "\n";
        if (c == a)
            cout << b << "\n";
    }
}
