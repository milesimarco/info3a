#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int prenumero (int y) {
	return y/10;
}

int coda(int y) {
	return (y-prenumero(y)*10); // MM
	// return 2*(y%10); MM
}

int div7_Iter(int x) {
	int somma = prenumero(x) - coda(x);
	for(int i=1; i<(somma/7)+1; i++) {
		if(i*7==somma) {
			return 1;
		}
	}
	return 0;
}

int div7_Ric_TR_v1(int x, int prova) { //faccio variare solo "prova"
    if(x/100==0) {
        if(x%7==0) {
            return 1;
        }
        return 0;
    }
    if(prova*7>(prenumero(x)-coda(x))) {
        return 0;
    }
    if(prova*7==(prenumero(x)-coda(x))) {
        return 1;
    }
    return div7_Ric_TR_v1(x, prova+1);
}

int div7_Ric_TR_v2(int x) { //faccio variare x
    if(x/100==0) { //per numeri con massimo due cifre
        if(x%7==0) {
            return 1;
        }
        return 0;
    }
    int somma = prenumero(x) - coda(x);
    return div7_Ric_TR_v2(somma);

}

int div7_Ric_NoTR(int x) {
    int div = 0;
    x = prenumero(x) - coda(x);
    if(x/100) {
        if(x%7==0) {
            return 1;
        }
        return 0;
    }
    return div + div7_Ric_NoTR(x);
}

int main(void) {

	printf("Versione Iterativa: %d\n", div7_Iter(95676));
	printf("Versione Ricorsiva #1 con TR: %d\n", div7_Ric_TR_v1(95676, 1));
	printf("Versione Ricorsiva #2 con TR: %d\n", div7_Ric_TR_v2(95677));
	printf("Versione Ricorsiva senza TR: %d\n", div7_Ric_NoTR(95677));

    return EXIT_SUCCESS;
}
