#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct bitv{
	int* mem;
	int len;
}* bitvector;


bitvector makeBitvector(int n){
	bitvector self = malloc(sizeof(bitvector));
	self->mem = calloc(n/8+1, 1);
	self->len = n;

	return self;
}

int getBit(bitvector bv, int x){	//return -1 if out of mem
	if(x > bv->len){
		return -1;
	}	
	int nbyte = x / 8;
	int pos = x % 8;
	return ( (bv->mem[nbyte] >> pos) & 1 );
}

void setBit(bitvector bv, int x){	//set to 1
	if(x > bv->len){
		printf("Errore accesso memoria");
		return;
	}
	
    int nbyte = x/8;
    int pos = x % 8;
    int mask = ( 1 << pos);
    bv->mem[nbyte] |= mask;
}


bitvector AND(bitvector bv1, bitvector bv2){
	if(bv1->len != bv2->len){
		printf("Errore - Dimensioni diverse dei vettori");
		return makeBitvector(0);		//warning, empty return with non void function
	}
	bitvector out = makeBitvector(bv1->len);
	
	for(int i = 0; i < bv1->len; i++){
		if(getBit(bv1, i) == getBit(bv2, i) && getBit(bv1, i) == 1){
			setBit(out, i);
		}
	}
	return out;
}


bitvector OR(bitvector bv1, bitvector bv2){
	if(bv1->len != bv2->len){
		printf("Errore - Dimensioni diverse dei vettori");
		return makeBitvector(0);		//warning, empty return with non void function
	}
	
	bitvector out = makeBitvector(bv1->len);
	
	for(int i = 0; i < bv1->len; i++){
		if(getBit(bv1, i) == 1 || getBit(bv2, i) == 1){
			setBit(out, i);
		}
	}
	return out;
}


bitvector NOT(bitvector bv){
	bitvector out = makeBitvector(bv->len);
	for(int i = 0; i < bv->len; i++){
		if(getBit(bv, i) == 0){
			setBit(out, i);
		}
	}
	return out;
}

char* toString(bitvector bv){
	char* buff = malloc((10*bv->len)*sizeof(char));
	sprintf(buff, "[");
	for(int i = 0; i < bv->len -1; i++){
		sprintf(buff + strlen(buff), "%d ", getBit(bv,i));
	}
	sprintf(buff + strlen(buff), "%d]", getBit(bv,bv->len-1));
	return buff;
}

void delete(bitvector bv){
	free(bv->mem);
	free(bv);
}

