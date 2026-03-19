#include <iostream>
using namespace std;

int main()
{
   
  char a;
  cin >> a ;

  if (a >= 65 && a <= 90)  
  {
    char f =  (a + 32);
    cout << f ;
  }
  else
  {
    cout <<(char) (a - 32);
  }
  

}