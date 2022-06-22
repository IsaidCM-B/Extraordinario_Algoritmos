/*
******PROBLEMA*****
Escribe un algoritmo en para hacer la conversión de un número binario a base 5, es claro que se utilizara una estrucutra de datos, así que implementar la estructura necesaria con las operaciones que se requieran. 

Para ello, se debe utilizar una pila.   Para la conversión, se debe utilizar una pila auxiliar. 

Ideas de Pasos a seguir:

Declarar una pila.
Declarar una variable para almacenar el número binario.
Declarar una variable para almacenar el número en base 5.
Empujar el número binario en la pila.
Mientras la pila no esté vacía:
podria hacerlo con Pop el número binario de la pila.?
Multiplicar el número binario por 2.?
Si el número binario es mayor o igual que 5, restar 5 del número binario y agregar 1 a la variable que almacena el número en base 5.
De lo contrario, agregar 0 a la variable que almacena el número en base 5.
Empujar el número en base 5 en la pila.
Mientras la pila no esté vacía:
Pop en el número en base 5 de la pila.
Imprimir el número en base 5.

****Algoritmo en Pseudocodigo *****

1. Declarar variables
2. Preguntar al usuario el número a convertir
3. Declarar una pila
4. Declarar una pila auxiliar
5. Mientras el número sea mayor a 0, realizar las siguientes operaciones:
6. Dividir el número entre 5
7. Empujar el residuo (módulo) a la pila
8. Empujar el cociente (división entera) a la pila
9. Mover todos los elementos de la pila a la pila auxiliar
10. Imprimir los elementos de la pila auxiliar
11. Fin
Nota no dejar todo para el final estas bien wey Isaid
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo
{
    int dato;
    struct Nodo * siguiente;
} nodo;

nodo * crearPila ()
{
    return NULL;
}

nodo * insertar (nodo *pila, int dato)
{
    nodo * nuevo;
    nuevo = (nodo *) malloc (sizeof (nodo));

    if (nuevo == NULL)
        return NULL;

    nuevo->dato = dato;
    nuevo->siguiente = pila;

    return nuevo;
}

nodo * sacar (nodo *pila, int *dato)
{
    if (pila == NULL)
        return NULL;

    *dato = pila->dato;
    nodo * aux = pila->siguiente;
    free (pila);
    return aux;
}

void imprimirPila (nodo *pila)
{
    if (pila == NULL)
        return;

    printf ("%d\n", pila->dato);
    imprimirPila (pila->siguiente);
}

int main()
{
    nodo * pila = crearPila();
    int numero, residuo, dato;
    printf("Ingrese numero: ");
    scanf("%d", &numero);

    while (numero > 0)
    {
        residuo = numero % 5;
        numero = numero / 5;
        pila = insertar(pila, residuo);
    }

    printf("Numero en base 5: ");
    while (pila != NULL)
    {
        pila = sacar(pila, &dato);
        printf("%d", dato);
    }

    printf("\n");
    system("PAUSE");
    return 0;
}
