/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main()
{
    double temp, cenc, kelwin, rankine;
    temp=40;
    cenc= 5.0/9.0*(temp-32);
    kelwin= cenc + 273;
    rankine= 9.0/5.0* kelwin;
    printf("%.2f farenheita to %.2f cencjusza\n", temp, cenc);
    printf("%.2f cencjusza to %.2f kelwina\n",cenc, kelwin);
    printf("%.2f kelwina to %.2f rankine\n", kelwin, rankine);
    
   

    return 0;
}


