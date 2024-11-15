#include <iostream>
#include <cmath> 
#include <time.h>
using namespace std;
int NumeroCasuale(int min, int max)
{
    return rand() % max - min + 1;  
}
int main() 
{
    int min, max;
    srand(time(0));
    cout << "Inserisci il valore minimo: ";
    cin >> min;
    cout << "Inserisci il valore massimo: ";
    cin >> max;
    int numero = rand() % max - min + 1;
    cout << "Numero casuale generato: " << numero << endl;
    return 0;
}