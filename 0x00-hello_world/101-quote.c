#include <unistd.h>
/*
*Authur: Meine Mac-Obegba
*Program: WinMingle Community C Training
*Description: Write a C program that prints without using printf or puts.
*Date: 27th February, 2026.
*/

int main(void)
{
    char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

    write(2, msg, sizeof(msg) - 1);
    return(1);
}
