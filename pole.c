#include <stdio.h>

int main()
{
    int y = 15;
    int x = 45;
    for(int i=0; i< y; i++) {
    for (int j = 0; j < x; j++)
    { if (i == 0 || j == 0 || i == y - 1 || j == x - 1)
      printf("*");
    else { printf(" "); } } printf("\n"); }

    return 0;
}
