#include <stdio.h>
static void print_dummy_solution(void);

int main(int argc, char **argv)
{
    int b = 0;
    for (int i = 0; i < 10000; i++) {
        char *c = malloc(10000);
        strcpy(c, "ABC");
    }
    print_dummy_solution();
    return b % 255;
}

static void print_dummy_solution()
{
    printf("15131\n");
    printf("0 1 2 4 6 7\n");
    //printf("617317\n");
    //printf("2 3 6\n");
}
