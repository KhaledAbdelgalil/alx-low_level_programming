#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int remaining = 2772;

    // Seed the random number generator
    srand((unsigned int)time(NULL));

    while (remaining > 0) {
        int r = rand() % 127 + 1; // Generate a random number between 1(ignore null char) and 127
        if (r > remaining) {
            r = remaining;
	}
        putchar(r); 
  	remaining -= r;
    }

    putchar('\n'); 
    return 0;
}

