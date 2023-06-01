#include <iostream>
#include <math.h>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    float pi_deseado=3.141592;
    float pi_sobre_cuatro=0;
    float pi=0;
    int iteraciones=0;
    
    // Cálculo de la serie de Leibniz
    
    while (pi!=pi_deseado) {
        pi_sobre_cuatro=pi_sobre_cuatro+pow(-1,iteraciones)/(2*iteraciones+1);
        iteraciones++;
        pi=pi_sobre_cuatro*4;
    }
    cout << "Iteraciones: " << iteraciones << endl;
    cout << fixed;
    cout << setprecision(6) << "Pi = " << pi << endl;
    getch();
    return 0;
}

