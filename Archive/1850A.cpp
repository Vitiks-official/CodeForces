#include <iostream>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, a, b, c;
    cin >> t;
    while (t--){
        cin >> a >> b >> c;
        if (a + b + c - min({a, b, c}) >= 10)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
