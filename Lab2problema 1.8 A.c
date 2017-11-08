#include <iostream>

using namespace std;

int main()
{
    int age ;
    int movieLenght ;

    cout << "Dati varsta : " ;
    cin >> age ;
    cout << endl ;
    cout << "Dati durata filmului : " ;
    cin >> movieLenght ;

    if ( ( age<=17 ) && ( movieLenght<=90 ) )
        cout <<"Dati discout " ;
    else
        cout <<"Nu dati discout " ;

 return 0;

}
