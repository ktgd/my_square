/*
**
** QWASAR.IO -- my_square
**
** @param 
**
** @return 
**
*/

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include <stddef.h>

/*char** f(int w, int h) // I should create the string j, concatenate the strings j - 1 and j (e.g. strcat(s[j], '\n')), repeat and terminate the string (e.g. if ( j == h && i == w ) { i += 1; *s[i] = '\0'; }).
{
    char** s = malloc( ( ( w * h ) + 1 ) * sizeof(char) );
    int i = 0;
    int j = 0;

    while ( j <= h )
    {
        if ( j == 0 || j == h )
        {
            while ( 0 < i && i < w )
            {
                if ( i == 0 || i == w )
                    s[i] = 'o';
                else
                    s[i] = '-';
                i++;
            }
        }
        else// if ( 0 != j && j != h )
        {
            while ( 0 < i && i < w )
            {
                if ( i == 0 || i == w )
                    s[i] = '|';
                else
                    s[i] = ' ';
                i++;
            }
        }
        //if ( j == h && i == w )
        //{
        //    i += 1;
        //    s[i] = '\0';
        //} // last minute fuckery
        i = 0;
        j++;
    }
    //j = h;
    //i = w + 1;
    //*s[i] = '\0'; // last minute fuckery
    return **s;
} //    unfinished, untested, leftover code

void draw(int w, int h)
{
    
} //    unfinished, untested, leftover code
*/ // Wait. What am I doing? And I drifted away from my pseudocode draft.

void draw(int w, int h)
{
    int i = 1;
    int j = 1;

    while ( j <= h )
    {
        if ( j == 1 || j == h )
        {
            while ( 1 <= i && i <= w )
            {
                if ( i == 1 )
                    putchar('o');
                else if ( 1 < i && i < w )
                    putchar('-');
                else// if ( i == w )
                {
                    putchar('o');
                    putchar('\n');
                }
                i++;
            }
            i = 1;
        }
        else if ( 1 < j && j < h )
        {
            while ( 1 <= i && i <= w )
            {
                if ( i == 1 )
                    putchar('|');
                else if ( 1 < i && i < w )
                    putchar(' ');
                else// if ( i == w )
                {
                    putchar('|');
                    putchar('\n');
                }
                i++;
            }
            i = 1;
        }
        j++;
    }
    //printf("\n\t`while ( j <= h )`:\n\ti: %d\tj: %d\n", i, j);
}

int main(int ac, char **av)
{
    if ( ac != 3 || !*av[1] || !*av[2] )
        return 0;
    else if ( ac != 3 || !isdigit(*av[1]) || !isdigit(*av[2]) )
        return 0;
    else
    {
        int x = atoi(av[1]);
        int y = atoi(av[2]);

        draw(x, y);
        return 0;
    }
}
