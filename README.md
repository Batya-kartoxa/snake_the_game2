# snake_the_game2
#include <stdio.h>

#define WIDTH 30
#define LENGTH 90

int main() {
    Pole();
}

void Pole() {
    printf("\033[0d\033[2J");
    for (int i = 0; i < WIDTH; i++) {
       for (int j = 0; j < LENGTH; j++) {
            if (i == 0 || j == 0 || i == WIDTH - 1 || j == LENGTH - 1) {
                printf("#");
            } else {
               printf(" ");
            }
        }
       printf("\n");
    }
}
