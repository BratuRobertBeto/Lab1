#include <iostream>
#define PI 3.14159265358979323846

using namespace std;

int main()
{
    double radians ;
    double degrees ;

    cout << " Dati numarul de radiani: ";
    cin >> radians ;
    cout << endl ;


    degrees = 180 * radians / PI ;

    cout << "Degrees : ";
    cout << int ( degrees ) ;
    cout << endl ;

    degrees = degrees - int ( degrees ) ;

    cout << "Minutes : " ;
    cout << int ( degrees * 60 ) ;
    cout << endl ;

    degrees = degrees -  int (degrees * 60 ) / 60;

    cout << "Seconds : " ;
    cout << int ( degrees * 3600 ) ;

    return 0;
}
