#include <stdio.h>
#include <stdlib.h>

int div7_Iter(int n) {
    int x = n/10 - 2*(n%10);
    if(x%7==0) {
        return 1;
    }
    return 0;
}

int div7_Ric_TR(int n) {
    if((n>-7 && n<0) || (n>0 && n<7)) { //sicuramente non sono numeri divisibili per 0
        return 0;
    }
    if(n/100==0) { //numeri con massimo 2 cifre
        if(n%7==0) {
            return 1;
        }
        return 0;
    }
    return div7_Ric_TR(n/10-2*(n%10));
}

int div7_Ric_NoTR(int n) {
    int div = 0;
    if(n/100==0) { //numeri con massimo 2 cifre
        if(n%7==0) {
            return 1;
        }
        return 0;
    }
    return div + div7_Ric_NoTR(n/10-2*(n%10));
}

int main(void) {

    printf("true = 1, false = 0");
    printf("\nVersione iterativa: %d\n", div7_Iter(49));
    printf("Versione ricorsiva con TR: %d\n", div7_Ric_TR(95676));
    printf("Versione ricorsiva senza TR: %d\n", div7_Ric_NoTR(95677));

    return EXIT_SUCCESS;
}
