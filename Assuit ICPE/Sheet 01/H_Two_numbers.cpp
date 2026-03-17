#include <iostream>
using namespace std;

int main()
{
    float A , B;

    cin >> A >> B;

    float X = A/B;

    cout << "floor " << A << " / " << B << " = " << (int) X << endl ;

    if( A != B )
    {
    cout << "ceil " << A << " / " << B << " = " << (int) X + 1 << endl ;
    }
    else
    {
      cout << "ceil " << A << " / " << B << " = " << X << endl ;
    }   
    

    float Z = X - (int)X ;

    if( Z >= 0.5 )
    {
     cout << "round " << A << " / " << B << " = " << (int) X + 1 << endl ;
    }
    else
    {
     cout << "round " << A << " / " << B << " = " << (int) X << endl ;
    }

}