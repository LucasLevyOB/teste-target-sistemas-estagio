# Respostas do teste para Estágio Análise e Desenvolvimento - Ribeirão Preto

#### 1.

```bash
  # iterações no laço de repetição
  01. K = 1 -  Soma = 0 + 1 => 1
  02. K = 2 -  Soma = 1 + 2 => 3
  03. K = 3 -  Soma = 3 + 3 => 6
  04. K = 4 -  Soma = 6 + 4 => 10
  05. K = 5 -  Soma = 10 + 5 => 15
  06. K = 6 -  Soma = 15 + 6 => 21
  07. K = 7 -  Soma = 21 + 7 => 28
  08. K = 8 -  Soma = 28 + 8 => 36
  09. K = 9 -  Soma = 36 + 9 => 45
  10. K = 10 -  Soma = 45 + 10 => 55
  11. K = 11 -  Soma = 55 + 11 => 66
  12. K = 12 -  Soma = 66 + 12 => 78
  13. K = 13 -  Soma = 78 + 13 => 91
```

**Resposta:** 91

#### 2.

```c++

// c++

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
```

**Resposta:** [Arquivo com o Código da Resposta](codigos/questao02.cpp)

#### 3.

**a)** 1, 3, 5, 7, \_\_\_
**Resposta:** 9
**Lógica:** somar 2 ao valor anterior, caso base 1, também pode ser considerado uma PA com q = 2.

**b)** 2, 4, 8, 16, 32, 64, \_\_\_\_
**Resposta:** 128
**Lógica:** 2 elevado ao valor do índice(termo da sequência), 2^1 = 2, 2^2 = 4, ..., 2^7 = 128.

**c)** 0, 1, 4, 9, 16, 25, 36, \_\_\_\_
**Resposta:** 49
**Lógica:** Termo da sequência menos 1, elevado ao quadrado, (1-1)^2 = 0, (2-1)^2 = 1, (3-1)^2 = 4, ... (8-1)^2 = 49

**d)** 4, 16, 36, 64, \_\_\_\_
**Reposta:** 100
**Lógica:** Dobro do índice da sequência, elevado ao quadrado, (1*2)^2 = 4, (2*2)^2 = 16, (3*2)^2 = 36, (4*2)^2 = 64, (5\*2)^2 = 100.

**e)** 1, 1, 2, 3, 5, 8, \_\_\_\_
**Resposta:** 13
**Lógica:** Sequência de Fibonacci, cada termo subsequente é a soma dos dois anteriores.

**f)** 2, 10, 12, 16, 17, 18, 19, \_\_\_\_
**Resposta:** 200
**Lógica:** São todos os números que começam com "d".

#### 4.

**Resposta:** Os dois estarão a mesma distância de Ribeirão Preto. Quando os dois veículos alinharem os parachoques eles estarão em um ponto de zero distância entre eles, o que os deixará a mesma distância da cidade.

#### 5.

```c++
// c++

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
```

**Resposta:** [Código da Questão](codigos/questao05.cpp)
