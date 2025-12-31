#include <iostream>
#include <set>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    for (int i = 0; i < t; ++i){
        cin >> n;
        vector <int> v(n);
        set <int> s;
        for (int j = 0; j < n; ++j){
            cin >> v[j];
            s.insert(v[j]);
        }
        if (count(v.begin(), v.end(), *s.begin()) == 1)
            cout << distance(v.begin(), find(v.begin(), v.end(), *s.begin())) + 1 << "\n";
        else
            cout << distance(v.begin(), find(v.begin(), v.end(), *s.rbegin())) + 1 << "\n";

    }
}
