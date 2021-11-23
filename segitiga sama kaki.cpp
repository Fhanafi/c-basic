#include<iostream>
using namespace std;

int main()
{
    int i, j, n, s;
    cout << "Masukkan jumlah j : ";
    cin >> n;
    
    for( i = n; i >= 1; i--)
    {
       for( s = i; s < n; s++)
          cout << "";
       for( j = 1; j <= (2 * i -1); j++)
          cout << "*";
        cout << "\n";
     }
    
}