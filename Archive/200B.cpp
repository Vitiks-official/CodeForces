#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a;
    float k = 0, n;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> a;
        k += a;
    }
    cout << fixed << setprecision(6) << k / n;
}
