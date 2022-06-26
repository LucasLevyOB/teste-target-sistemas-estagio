#include <iostream>

using namespace std;

bool pertenceFibonacci(int numero)
{
  int resultado = 0;
  int f1 = 0;
  int f2 = 1;
  while (resultado < numero)
  {
    resultado = f1 + f2;
    f1 = f2;
    f2 = resultado;
  }

  if (numero == resultado)
    return true;

  return false;
}

int main()
{
  int numero;

  cin >> numero;

  bool pertence = pertenceFibonacci(numero);

  if (pertence)
    cout << "Pertence a sequência" << endl;
  else
    cout << "Não pertence a sequência" << endl;

  return 0;
}