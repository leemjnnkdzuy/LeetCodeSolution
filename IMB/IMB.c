#include <stdio.h>
#include <conio.h>
#include <Windows.h>


int main(int argc, char const *argv[])
{
    float a, b;

    printf ("nhap chieu cao : ");
    scanf ("%f", &a);
    printf ("nhap can nang : ");
    scanf ("%f", &b);

    float IMB = a/(b*b);

    printf ("IMD = %f", IMB);

    getch ();
    return 0;
}
