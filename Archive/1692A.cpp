#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, a, b, c, d;
    cin >> t;
    for (int i = 0; i < t; ++i){
        cin >> a >> b >> c >> d;
        int k = 0;
        if (b > a)
            ++k;
        if (c > a)
            ++k;
        if (d > a)
            ++k;
        cout << k << "\n";
    }
}
