#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int sm = 0, sp = 0, n, c;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> c;
        if (c == -1){
            if (sm == 0)
                sp++;
            else
                sm--;
        } else
            sm += c;

    }
    cout << sp;
}
