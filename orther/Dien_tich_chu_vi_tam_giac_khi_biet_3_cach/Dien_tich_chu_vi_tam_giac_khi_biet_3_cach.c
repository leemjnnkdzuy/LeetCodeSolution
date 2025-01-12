#include <conio.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float a, b, c, S, P;

    printf("nhap gia tri a : ");
    scanf("%f",&a);
    printf("nhap gia tri b : ");
    scanf("%f",&b);
    printf("nhap gia tri c : ");
    scanf("%f",&c);


    P = (a + b + c) / 2;
    S = sqrt(P * (P - a) * (P - b) * (P - c));

    printf("Dien tich cua tma giac voi do dai 3 canh da cho la : %f", S);

    getch ();
    return 0;
}
