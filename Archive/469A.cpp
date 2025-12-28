#include <iostream>
#include <set>
using namespace std;

int main(){
    int n, p, a;
    set <int> s;
    cin >> n;
    for (int i = 0; i < 2; ++i){
        cin >> p;
        for (int j = 0; j < p; ++j){
            cin >> a;
            s.insert(a);
        }
    }
    if (s.size() == n)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";
}
