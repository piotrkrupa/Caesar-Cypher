#include <stdio.h>
#include <stdlib.h>

//
//a=97, z=122
//A=65, Z=90

int cezar(char *tab, int p, int size){
	int i, temp;
	for( i = 0; i < size; i++){
		//printf("%c", tab[i]);
		printf("%c", tab[i] +p);
	}

	for( i = 0; i < size; i++){
		if( tab[i] >= 97 && tab[i] <= 122){
			if(tab[i] > 122){
				temp = tab[i] - 122;
			}
			tab[i] = tab[i]+p;
		}




		if( tab[i] >= 65 && tab[i] <= 90){
			tab[i] = tab[i]+p;
		}
	}

	return 0;

}



int main(){
	int p;
	int size;
	char tab[] = {"AaaaaBbbbbCcccc"};
	p=1;
	size = sizeof(tab);

	cezar(&tab[0], p, size);

	printf("\n");
	system("PAUSE");
	return EXIT_SUCCESS;
}