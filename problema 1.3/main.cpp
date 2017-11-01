#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char nume[20];
    char prenume[20];

    cout << " nume: ";
    cin >> nume;

    cout << endl ;

    cout << "prenume: " ;
    cin >> prenume ;

    cout << endl ;

    strupr ( nume ) ;
    strupr ( prenume ) ;

    cout << nume ;
    cout << endl ;
    cout << prenume ;
    cout << endl ;

    strlwr ( nume ) ;
    strlwr ( prenume );

    cout << nume ;
    cout << endl ;
    cout << prenume ;


    return 0;
}
