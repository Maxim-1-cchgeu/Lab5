#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_CTYPE, "RUS.UTF-8");

    double w, x, y, z;

    puts("Введите x, y, z (через пробел): ");
    scanf("%lf %lf %lf", &x, &y, &z);
    w = pow(fabs(cos(x) - cos(y)), 1 + 2*pow(sin(y), 2)) * (1 + z + pow(z, 2)/2 + pow(z, 3)/3 + pow(z, 4)/4);
    printf("При x = %f,\ny = %f,\nz = %f:\n  w = %.4f.", x, y, z, w);
}
