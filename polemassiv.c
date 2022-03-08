#include <stdio.h>
#include <stdlib.h>



int polex = 40;
int poley = 60;
int pole (int a[polex][poley]);
int output (int a[polex][poley]);
int snake (int head, int body, int tail, int a[polex][poley]);

int main (){
    int data[polex][poley];
    pole(data);
    output(data);
    return 0;
    
    
}
int pole (int a[polex][poley]){
    for (int i = 0; i < polex; i++){
        for (int j = 0; j < poley; j++){
            if ((i>0) && (i<polex-1) && (j>0) && (j< poley-1)){
                a[i][j] = 1 ;
        }else{
            a[i][j] = 0 ;
    }
}
}
}

int output  (int a[polex][poley]){
    
    for (int i = 0; i < polex; i++){
        for (int j = 0; j < poley; j++){
            if (a[i][j] == 1){
                printf (" ");
            }else{
            printf ("*");
    }
    }
        printf("\n");

    }
}
