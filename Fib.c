#include <stdio.h>

/* fibonacci sequence; 0 to 255 */

int main()
{
    int x;
    int y;
    int z;

    while (1) 
    {
        x = 0;
        y = 1;
        do {
            printf("%d\n", x);

            z = y + y;
            x = y;
            y = z;
        } while (x < 255);
        break;
    }
}
