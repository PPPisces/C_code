#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#define ¦Ð 3.14159 

int main()
{
    double A, B, C;
    cin >> A >> B >> C;
    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n", A * C / 2.0, ¦Ð * C * C, (A + B) * C / 2, B * B, A * B);
    return 0;
}
