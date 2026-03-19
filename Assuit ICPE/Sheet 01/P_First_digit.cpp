
#include <iostream>
using namespace std;

int main()
{
   int x;
   cin >> x;

    int z = (x - (x % 1000)) / 1000;

    if(z % 2 == 0)
    cout << "EVEN";
    else
    cout << "ODD";

}