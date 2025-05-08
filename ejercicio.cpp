#include <iostream>
using namespace std;

int main(void)
{
    int tipoDeCaso = 0, num_1 = 0, num_2 = 0, total = 0; //Declaracion de variables

    cout << "Ingres un numero entre 1-4" << endl //Menu
         << "[1] suma" << endl
         << "[2] resta" << endl
         << "[3] multiplicacion" << endl
         << "[4] division" << endl;
    cin >> tipoDeCaso;

    switch (tipoDeCaso)
    {
    case 1: //Suma
        cout << "Ingrese su primer numero" << endl;
        cin >> num_1;
        cout << "Ingrese su segundo numero" << endl;
        cin >> num_2;

        total = num_1 + num_2; //Se realiza el total y luego se imprime el resultado

        cout << "El total de su suma es: " << total;
        break;
    case 2: //Resta 
        cout << "Ingrese su primer numero" << endl;
        cin >> num_1;
        cout << "Ingrese su segundo numero" << endl;
        cin >> num_2;

        total = num_1 - num_2; //Se realiza el total y luego se imprime el resultado

        cout << "El total de su resta es: " << total;
        break;
        