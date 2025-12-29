#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, rat;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> rat;
        if (rat <= 1399)
            cout << "Division 4";
        else if (rat <= 1599)
            cout << "Division 3";
        else if (rat <= 1899)
            cout << "Division 2";
        else
            cout << "Division 1";
        cout << "\n";
    }
}
