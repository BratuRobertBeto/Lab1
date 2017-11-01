#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int i;
    char NumeSiPrenume[50];

    cout << "Da-ti numele si prenumele:";
    cin.get(NumeSiPrenume,50);

    for ( i=1 ; i<=10 ; i++ )
        cout << NumeSiPrenume << " " ;


    return 0;
}
