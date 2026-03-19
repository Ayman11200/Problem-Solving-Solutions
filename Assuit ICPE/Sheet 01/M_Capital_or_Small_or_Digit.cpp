#include <iostream>
using namespace std;

int main()
{
   
    char x;
    cin >> x;

    if(x <= 57 && x >= 48)
    cout << "IS DIGIT";

    else if (x <= 90 && x >= 65)
    {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL";
    }
     else 
    {
        cout << "ALPHA" << endl;
        cout << "IS SMALL";
    }





}