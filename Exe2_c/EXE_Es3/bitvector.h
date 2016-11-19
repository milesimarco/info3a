#ifndef BITVECTOR__
#define BITVECTOR__

/*
	Il codice inizializza un vettore di int nello heap e setta tutti i bit a 0;
	Il set del bit lo pone uguale ad 1. Se viene settato un bit nell'area di memoria più
	avanti dell'ultimo settato ad 1 allora si posta la dimensione.
	Per creare un vettore con i bit più significativi a zero usare setLen()
	La rappresentazione è dal meno al più significativo
*/

typedef struct bitv* bitvector;

bitvector makeBitvector(int n);
int getBit(bitvector bv, int x);
void setBit(bitvector bv, int x);
void setLen(bitvector bv1, int x);

bitvector AND(bitvector bv1, bitvector bv2);
bitvector OR(bitvector bv1, bitvector bv2);
bitvector NOT(bitvector o);
char* toString(bitvector bv);
void delete(bitvector bv);

#endif
