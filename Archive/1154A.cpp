#include <iostream>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x1, x2, x3, x4, mx;
    cin >> x1 >> x2 >> x3 >> x4;
    mx = max({x1, x2, x3, x4});
    for (auto x: {x1, x2, x3, x4}){
        if (x - mx != 0)
            cout << mx - x << " ";
    }
}
