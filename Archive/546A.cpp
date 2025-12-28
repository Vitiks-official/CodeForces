#include <iostream>
using namespace std;

int main(){
    long long k, n, w;
    cin >> k >> n >> w;
    if ((w + 1) * k * w / 2 <= n)
        cout << 0;
    else
        cout << (w + 1) * k * w / 2 - n;
}
