/* CP/M Clear screen function */

#include <stdio.h>
#define ASCII_ESC 27

main()
{
     printf("%c[37m", ASCII_ESC);  /* Return text colour to white */
     printf("%c[2J", ASCII_ESC);   /* Clear screen */
     printf("%c[H", ASCII_ESC);    /* Move cursor to top left */
}










I






















