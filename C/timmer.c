#include <stdio.h>
#include <time.h>

int main()
{
    int seconds = 45; // specify the number of seconds
    printf("Starting timer for %d seconds...\n", seconds);
    clock_t start = clock();
    while ((clock() - start) / CLOCKS_PER_SEC < seconds)
    {
    }
    printf("Time's up!\n");
    return 0;
}

