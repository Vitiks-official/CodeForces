#include <iostream>
using namespace std;

int main(){
    int n, h, k = 0, s;
    cin >> n >> h;
    for (int i = 0; i < n; ++i){
        cin >> s;
        if (s <= h)
            k++;
        else
            k += 2;
    }
    cout << k;
}
