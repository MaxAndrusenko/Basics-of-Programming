#include <iostream>

using namespace std;

int main()
{
    int n;
    double sr = 0;
    cin >> n;
    int A[n];
    for(int i = 0; i < n; i++){
        cin >> A[i];
        sr += A[i];
    }
    cout << endl;
    sr = sr/n;
    for(int i = n - 1; i >= 0; i--){
        if(A[i] > sr){
            cout << A[i] << "  ";
        }
    }
    cout << endl;
}
