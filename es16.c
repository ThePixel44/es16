#include <stdio.h>

int main(int argc, char const *argv[]) {
    for(int i=0; i<=50; i++){
        printf("%d\n", i);
    }

    printf("*********************************************************\n", NULL);

    for(int z=52; z<=100; z+=2){
        printf("%d\n", z);
    }

    printf("*********************************************************\n", NULL);

    for(int a=104; a<=200; a+=4){
        printf("%d\n", a);
    }

    printf("*********************************************************\n", NULL);

    for(int b=195; b>=0; b-=5){
        printf("%d\n", b);
    }

    printf("*********************************************************\n", NULL);

    return 0;
}
