#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // initialize the random seed
    int x = rand(); // generate a random integer between 0 and RAND_MAX (inclusive)
    printf("Random number: %d\n", x);
    return 0;
}
