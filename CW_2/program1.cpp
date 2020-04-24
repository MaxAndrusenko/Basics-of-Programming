#include <iostream>
using namespace std;
int main()
{
    
 
    cout << "n = ";
    int n;
    cin >> n;
    int * ar = new int[n];
    cout << "enter array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ": ";
        cin >> ar[i];
    }
 
    int temp;
    int i, j;
 
    for (j = 0, i = n - 1; j < i; --i, ++j)
    {
        temp = ar[i];
        ar[i] = ar[j];
        ar[j] = temp;
    }
 
    for (int k = 0; k < n; k++)
        cout << ar[k] << " ";
 
    cout << endl;
 
        delete [] ar;
 
    system("pause");
    return 0;
}
