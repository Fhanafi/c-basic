#include<iostream>
using namespace std;

int main()
{
    int i, j, n, s;
    n = 25;
     for( i = 1; i <= n; i++ )
     {
        s = n - i;
        for( j = 1; j <= s; j++) 
         cout<< " ";
        for( j = 1; j <= 1; j++) 
        cout << "*";
        cout << "\n";
     }
}