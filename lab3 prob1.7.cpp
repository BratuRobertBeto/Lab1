#include <iostream>

using namespace std;

int main()
{
    int angle ;

    cout << " Type an angle: " ;

    do
    {
        cin >> angle ;
        if ( angle > 90 || angle < 0)
        {
            cout << endl ;
            cout << " Error! Type another angle: " ;
        }

    }while( angle>90 || angle < 0 );


    return 0;
}
