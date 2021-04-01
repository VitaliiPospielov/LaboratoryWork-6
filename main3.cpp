#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>


using namespace std;

int main()

{

srand(time(NULL));

int rows, cols; 

cout << "Enter n: ";

cin >> rows;

cout << "Enter m: ";

cin >> cols;

if (rows != cols) return 0; 

int a, b; 

cout << "Enter a: ";

cin >> a;

cout << "Enter b: ";

cin >> b;


int** arr = new int* [rows]; 

for (int i = 0; i < rows; i++)

{

 arr[i] = new int[cols];

}

cout << "n = " << rows << endl

 << "m = " << cols << endl

 << "Interval - [" << a << ";" << b << "]" << endl << endl

 << "Our matrix: " << endl;

for (int i = 0; i < rows; i++)

{

 for (int j = 0; j < cols; j++)

 {

  arr[i][j] = a + rand() % (b - a + 1);

  cout << arr[i][j];

 }

 cout << endl;

}

cout << endl;

int mainOdd = 0, mainEven = 0, sideOdd = 0, sideEven = 0;

for (int i = 0; i < rows; i++)

{

 for (int j = 0; j < cols; j++)

 {

  if (i == j) (arr[i][j] % 2 == 0) ? mainEven++ : mainOdd++;

  if (i + j == rows - 1) (arr[i][j] % 2 == 0) ? sideEven++ : sideOdd++;

 }

}

int column, minSum;

for (int i = 0; i < cols; i++)

{

 int sum = 0;

 for (int j = 0; j < rows; j++)

 {

  sum += arr[j][i];

 }

 if (i == 0) { minSum = sum; column = i; }

 else if (sum < minSum) { minSum = sum; column = i; }

}

cout << "---Main diagonal---" << endl

 << "Even numbers: " << mainEven << endl

 << "Odd numbers: " << mainOdd << endl;

cout << endl << "---Side diagonal---" << endl

 << "Even numbers: " << sideEven << endl

 << "Odd numbers: " << sideOdd << endl;

cout << endl << "Column number: " << column << " (counting from 0)" << endl;

for (int i = 0; i < rows; i++) 

{

 delete[] arr[i];

}

delete[] arr;

}
