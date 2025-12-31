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
        cout << a + b + c - min({a, b, c}) - max({a, b, c}) << "\n";
    }
}
