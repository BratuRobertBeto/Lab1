#include <iostream>

using namespace std;

int FibonaciFunctionRecursive ( int x )
{
    if ( x <= 1)
    {
        return 1 ;
    }
    return FibonaciFunctionRecursive(x-1)+FibonaciFunctionRecursive(x-2) ;

}


int main()
{
    int x ;

    cout << " Type a number : " ;
    cin >> x ;
    cout << endl ;

    cout << FibonaciFunctionRecursive( x );

    return 0;
}
