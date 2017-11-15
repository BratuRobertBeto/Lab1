#include <iostream>

using namespace std;

int main()
{
    int n ;
    int i ;
    int j ;

    cout << "type a number: " ;
    cin >> n ;
    cout << endl ;

    for ( i = 1 ; i < n+1 ; i++ )
    {
        for ( j = i ; j <= n-i+1 ; j++)
        {
            cout << j << " " ;
        }
        cout << endl ;
    }

       return 0;
}
