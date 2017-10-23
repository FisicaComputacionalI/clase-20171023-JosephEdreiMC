//Programa para verificar si un numero es primo o no
#include <iostream>
#include <string>

using namespace std;
#include <iostream>
#include <string>

using namespace std;
int main()
{
  int p=0;
  int i=1;
  bool Primo = true;

  cout << "Enter a positive integer: ";
  cin >> p;
  for(i = 2; i <= p / 2; ++i)
  {
      if(p%i == 0)
      {
          Primo = false;
          break;
      }
  }
  if (Primo)
      cout << p<< " es un numero primo"<< endl;
  else
      cout << p<< " no es un numero primo"<< endl;

  return 0;
}
