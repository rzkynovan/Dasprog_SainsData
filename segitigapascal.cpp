#include <iostream>

using namespace std;

long faktorial(int a)
{

  long z = 1;
  int i = 1;

  while (i <= a)
  {
    z = z * i;
    i++;
  }

  return z;
}

int main()
{
  int n, i, j;

  cout << "Masukkan nilai: ";
  cin >> n;

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n - i - 1; j++)
    {
      cout << "  ";
    }

    for (j = 0; j <= i; j++)
    {
      cout << faktorial(i) / (faktorial(j) * faktorial(i - j)) << "   ";
    }

    cout << endl;
  }

  return 0;
}