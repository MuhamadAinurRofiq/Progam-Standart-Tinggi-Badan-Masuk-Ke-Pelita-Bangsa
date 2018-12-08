#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tinggi;
    printf("\n");
    printf ("PROGAM PERSYARATAN TINGGI BADAN MASUK KE PT. A \n ");
    printf ("\n Berapakah tinggimu ? \n");
    printf ("\n Masukkan tinggimu : ");
    scanf ("%f",&tinggi);

    if (tinggi>160)
    {
        printf ("\n Selamat kamu LULUS");
    }
    else
    {
        printf ("\n Maaf kamu GAGAL");
    }
}

