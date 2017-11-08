#include <iostream>

using namespace std;

int main()
{
    int n ;
    int numar ;
    int i ;
    int min , max ;

    cout << "Dati numarul : ";
    cin >> n ;


    cin >> numar ;
    min = numar ;
    max = numar ;


    for ( i=2 ; i<=n ; i++ )
    {
        cin >> numar ;
        if ( numar < min )
            min = numar ;
        else
            if ( numar > max )
            max = numar ;

    }
    cout << "max = " << max ;
    cout << endl ;
    cout << "min = " << min ;


    return 0;
}
