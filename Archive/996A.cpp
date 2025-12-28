#include <iostream>
using namespace std;

int main(){
    int n, k = 0;
    cin >> n;
    k += n / 100;
    n %= 100;
    k += n / 20;
    n %= 20;
    k += n / 10;
    n %= 10;
    k += n / 5;
    n %= 5;
    cout << n + k;
}
