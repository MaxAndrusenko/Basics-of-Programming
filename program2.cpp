#include <iostream>
#include <ctime>
using namespace std;
void PrintMat(int mat, int n, int m)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << mat[i][j] << " ";
    }
    cout << endl;
  }
}
void Mult(int **mat, int n, int m, int number) // number число на скільки помножити матрицю
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      mat[i][j] *= number;
    }
  }
}
int **Diff(int **a, int**b, int n, int m)
{
  Mult(a, n, m, 3);
  Mult(b, n, m, 2);
  
  int **result = new int*[n];
  for (int i = 0; i < n; ++i)
  {
    result[i] = new int[m];
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      result[i][j] = a[i][j] - b[i][j];
    }
    cout << endl;
  }
  return result;
}
int main()
{
  int n,m;
  cout << "enter n,m:";
  cin >> n >> m;
  srand(time(NULL));
  int **a = new int*[n];
  for (int i = 0; i < n; ++i)
  {
    a[i] = new int[m];
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      a[i][j] = 0 + rand() % 10;
    }
  }
  cout << "matrix A:" << endl;
  PrintMat(a, n, m);


  int **b = new int*[n];
  for (int i = 0; i < n; ++i)
  {
    b[i] = new int[m];
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      b[i][j] = 0 + rand() % 10;
    }
  }

  cout << "matrix B:" << endl;
  PrintMat(b, n, m);

  int  result = Diff(a, b, n, m);
  cout << "3A-2B:" << endl;
  PrintMat(result, n, m);

  cout << endl;
  system("pause");
  return 0;
}
