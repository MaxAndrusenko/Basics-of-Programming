#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cout << "n =";
    cin >> n;
    int save_n = n;
    int a = n % 10;
    int b = 0;
    int count = 0;
    while (save_n != 0) {
        b = save_n % 10;
        save_n /= 10;
        ++count;
    }

    n = n - (b * pow(10,count - 1)) + (a * pow(10,count - 1)) - a + b;
    cout << n;
    return 0;
}
