#include <iostream>
#include <set>
using namespace std;

int main(){
    int n;
    cin >> n;
    set <int> s;
    n++;
    s.insert(n % 10);
    s.insert(n / 10 % 10);
    s.insert(n / 100 % 10);
    s.insert(n / 1000);
    while (s.size() != 4){
        n++;
        s.clear();
        s.insert(n % 10);
        s.insert(n / 10 % 10);
        s.insert(n / 100 % 10);
        s.insert(n / 1000);
    }
    cout << n;
}
