#include <iostream>

using namespace std;

int fun(int n){
    int sum = 0;
    for(int i = 1; i <= n; ++i){
        sum += (i * i);
    }
    return sum;
}

int main() {
    int n;
    cout << "n =";
    cin >> n;
    cout << fun(n);
    return 0;
}
