#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
 
    const double PI = 3.141592653;
    double R ;

    cin >> R;
    double x = 0;
    x =  PI * R * R;
    cout << fixed << setprecision(9) << x ;

}