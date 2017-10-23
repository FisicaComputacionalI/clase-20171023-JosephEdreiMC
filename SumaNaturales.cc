//Programa que suma N numeros naturales
//23 de octubre del 2017
#include <iostream>
#include <string>

using namespace std;
int main()
{
 int sum = 0;
 int N = 0;
 int count = 1;
 cout << "Ingrese un entero no negativo" << endl;
 cin >> N;

for(count=1; count<=N; count++){
 sum = sum + count;
}

 cout << "La suma de los N numeros naturales es " <<sum << endl;
return 0;
}
