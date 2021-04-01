#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>

using namespace std;

int main()

{

   srand(time(NULL));

   int N, M;

   cout << "Enter n: ";

   cin >> N;

   cout << "Enter m: ";

   cin >> M;

   if (N != M) 

   {

       cout << "n should be equal to m" << endl;

       return 0;

   }

   int a, b; 

   cout << "Enter a: ";

   cin >> a;

   cout << "Enter b: ";

   cin >> b;


   int** arr = new int* [N]; 

   int** result = new int* [N]; 

   for (int i = 0; i < N; i++)

   {

       arr[i] = new int[M];

       result[i] = new int[M];

   }

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

   for (int i = 0; i < N; i++) 

   {

       delete[] result[i];

       delete[] arr[i];

   }

   delete[] result;

   delete[] arr;

}
