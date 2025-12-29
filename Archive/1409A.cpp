#include <iostream>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> a >> b;
        cout << (max(b, a) - min(a, b) + 9) / 10 << "\n";
    }
}
