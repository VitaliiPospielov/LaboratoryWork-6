#include <iostream>
#include <ctime>
#include <string>
#include <iomanip>
#include <malloc.h>
#include <cstdlib>
#include <stdio.h>
using namespace std;
int main()
{
srand(time(0));
const int N = 5, M = 5; // Константні розміри матриці
if (N != M) // Перевірка на не квадратну матрицю
{
 cout << "n should be equal to m" << endl;
 return 0;
}
int a, b;// Межі випадкових чисел масиву
cout << "Enter a: ";
cin >> a;
cout << "Enter b: ";
cin >> b;
int arr[N][M]; // Статичний масив
int result[N][M]; // Статичний масив (результат)
cout << "n = " << N << endl
 << "m = " << M << endl
 << "Interval - [" << a << ";" << b << "]" << endl << endl
 << "Our matrix: " << endl;
for (int i = 0; i < N; i++)
{
 for (int j = 0; j < M; j++)
 {
  arr[i][j] = a + rand() % (b - a + 1);
  cout << arr[i][j];
 }
 cout << endl;
}
for (int i = 0; i < N; i++)
{
 for (int j = 0; j < M; j++)
 {
  if (j == 0 && i != N - 1)
  {
   result[N - 1][i + 1] = arr[i][j];
  }
  else if (i == N - 1 && j != 0)
  {
   result[j - 1][0] = arr[i][j];
  }
  else
  {
   result[i][j] = arr[i][j];
  }
 }
}
cout << endl << "Result matrix:" << endl;
for (int i = 0; i < N; i++)
{
 for (int j = 0; j < M; j++)
 {
  cout << result[i][j];
 }
 cout << endl;
}
}
