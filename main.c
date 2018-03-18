/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <limits.h>



int main()
{
     int wiek = 4;
    short int ilosc_bluzek = 6; 
    long int ilosc_bulek = 5;
    signed int pietro = -2;
    unsigned int pietro2= 3;
    char punkt = 'e'; 
    signed char liczba1 = 124; 
    unsigned char liczba2 = -123; 
    float temperatura_cieczy = 40.2f;
    double wysokosc = 1.5687;
    long double wysokosc2 = 2.1111;
    short punkty= 8;
    signed short sid = -9;
    signed short int der =-7;
    unsigned short int das = 1;
    signed die = -2;
    signed long liczba_czekolady =989834;
    signed long int liczba_rowerow = 57654;
    unsigned long int liczba_aut = 5464567569877768;
    
    
    printf("Zmienna int ma rozmiar: %dB\n,najmniejsza wartosc dla int to:%d\n, najwieksza wartosc dla int to:%d\n", sizeof(wiek),INT_MIN, INT_MAX);    
  //printf("Zmienna short int ma rozmiar: %dB\n,", sizeof( ilosc_bluzek);
    printf("Zmienna long int ma rozmiar: %dB\n, najmniejsza wartosc to: %d\n, najwieksza wartosc to: %d\n", sizeof( ilosc_bulek),LONG_MIN, LONG_MAX);
  //printf("Zmienna signed int ma rozmiar: %dB\n", sizeof(pietro));
    printf("Zmienna unsigned int ma rozmiar: %dB\n, najwieksza wartosc unsigned int to: %d\n", sizeof(pietro2), UINT_MAX);
    printf("Zmienna char ma rozmiar: %dB\n, najmniejsza wartosc dla char to: %d\n, największa wartosc dla char to:%d\n", sizeof(punkt),SCHAR_MIN, SCHAR_MAX);  
  //printf("Zmienna signed char ma rozmiar: %dB\n", sizeof(liczba1));   
    printf("Zmienna unsigned char ma rozmiar: %dB\n, najwieksza warotsc dla unsigned char to: %d\n", sizeof(liczba2), UCHAR_MAX);  
  //printf("Zmienna float ma rozmiar: %dB\n", sizeof(temperatura_cieczy)); 
  //printf("Zmienna double ma rozmiar: %dB\n", sizeof(wysokosc));
  //printf("Zmienna long double ma rozmiar: %dB\n", sizeof(wysokosc2));
    printf("Zmienna short ma rozmiar: %dB\n, najmniejsza wartosc dla short to:%d\n, najwieksza wartosc dla short: %d\n", sizeof(punkty), SHRT_MIN, SHRT_MAX);
  //printf("Zmienna signed short ma rozmiar: %dB\n", sizeof(sid));
 // printf("Zmienna signed short int ma rozmiar: %dB\n", sizeof(der));
    printf("Zmienna unsigned short int ma rozmiar: %dB\n, najwieksza wartosc dla unsigned short to: %d\n", sizeof(das), USHRT_MAX);
  //printf("Zmienna signed ma rozmiar: %dB\n", sizeof(die));
 // printf("Zmienna signed long ma rozmiar: %dB\n", sizeof(liczba_czekolady));
 // printf("Zmienna signed long int ma rozmiar: %dB\n", sizeof(liczba_rowerow));
    printf("Zmienna unsigned long int ma rozmiar: %dB\n, najwieksza wartosc to: %d\n", sizeof(liczba_aut), ULONG_MAX);
   
return 0;
    
}












 