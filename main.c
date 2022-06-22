//Escribe un algoritmo en para hacer la conversión de un número binario a base 5, es claro que se utilizara una estrucutra de datos, así que implementar la estructura necesaria con las operaciones que se requieran.  Para ello, se debe utilizar una pila.   Para la conversión, se debe utilizar una pila auxiliar.
//Pasos a seguir:
/*Pasos:

1. Declarar una pila.
2. Declarar una variable para almacenar el número binario.
3. Declarar una variable para almacenar el número en base 5.
4. Empujar el número binario en la pila.
5. Mientras la pila no esté vacía:
6. Pop el número binario de la pila.
7. Multiplicar el número binario por 2.
8. Si el número binario es mayor o igual que 5, restar 5 del número binario y agregar 1 a la variable que almacena el número en base 5.
9. De lo contrario, agregar 0 a la variable que almacena el número en base 5.
10. Empujar el número en base 5 en la pila.
11. Mientras la pila no esté vacía:
12. Pop en el número en base 5 de la pila.
13. Imprimir el número en base 5.*/

/*
#include <iostream>
#include <stack>
using namespace std;

void convertir(stack<int> &pila);

int main()
{
    stack<int> pila;
    int numero;
    cout << "Ingrese el numero binario: ";
    cin >> numero;
    pila.push(numero);
    convertir(pila);
    return 0;
}
{
    stack<int> pila;
    int numero;
    char respuesta;

    do
    {
        cout << "Ingrese un número" << endl;
        cin >> numero;
        convertir(pila);
        cout << "Desea ingresar otro número? (s/n)" << endl;
        cin >> respuesta;

    } while (respuesta == 's');

    return 0;
}

void convertir(stack<int> &pila)
{
    stack<int> auxiliar;
    int resto;
    int numero;

    while (numero != 0)
    {
        resto = numero % 5;
        numero = numero / 5;
        auxiliar.push(resto);
    }

    while (!auxiliar.empty())
    {
        cout << auxiliar.top();
        auxiliar.pop();
   }
}
*/
#include <iostream>
using namespace std;

int main(){
    int numero;
    int base=5;
    int cociente=numero/base;
    int residuo=numero%base;
    int resultado=0;
    int i=1;

    cout<<"ingrese un numero"<<endl;
    cin>>numero;

    while(cociente!=0){
        residuo=numero%base;
        numero=cociente;
        cociente=numero/base;
        resultado=resultado+residuo*i;
        i=i*10;
    }
    cout<<"el resultado es: "<<resultado<<endl;
    return 0;
}