#include <iostream>
using namespace std;

int main()
{
    int A,B,C;
    cin >> A >> B >> C ;

    int Max = A;
    int Min = A;

    if(B > Max) Max = B;
    if(B < Min) Min = B;

    if(C > Max) Max = C;
    if(C < Min) Min = C;

    
    cout << Min << " " << Max;

  
}