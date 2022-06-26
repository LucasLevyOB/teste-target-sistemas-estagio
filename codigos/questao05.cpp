#include <iostream>

using namespace std;

void inverteString(string &valor)
{
  for (int i = 0, j = valor.length() - 1; i < j; i++, j--)
  {
    char aux = valor[i];
    valor[i] = valor[j];
    valor[j] = aux;
  }
}

int main()
{
  string entrada;
  cin >> entrada;

  inverteString(entrada);

  cout << entrada << endl;

  return 0;
}