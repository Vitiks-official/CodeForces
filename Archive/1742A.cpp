#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, a, b, c;
    cin >> t;
    for (int i = 0; i < t; ++i){
        cin >> a >> b >> c;
        if (a + b == c || a + c == b || b + c == a)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
}
