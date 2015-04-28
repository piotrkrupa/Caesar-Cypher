#include <stdio.h>
#include <stdlib.h>
#define max_tab 50

//
//a=97, z=122
//A=65, Z=90

void Cesar(char *tab, int move, int size){
	int i, temp;
	for( i = 0; i < size; i++){
		if( tab[i] >= 97 && tab[i] <= 122 ){
			if( tab[i] >= 97 && tab[i] <= 122 ){
				tab[i] = tab[i] + move; // temp - probability of ASCII overflow (only 0-127)
			}
			if( tab[i] > 122){
				tab[i] = tab[i] - 26;
			}

		}

		if( tab[i] >= 65 && tab[i] <= 90 ){
			if( tab[i] >= 65 && tab[i] <= 90 ){
				tab[i] = tab[i] + move;
			}
			if( tab[i] > 90 ){
				tab[i] = tab[i] - 26;
			}
		}
	}
}
void CesarDecryption(char *tab, int move, int size){
	int i;
	for( i = 0; i < size; i++){
		if( tab[i] >= 97 && tab[i] <= 122 ){
			if( tab[i] >= 97 && tab[i] <= 122 ){
				tab[i] = tab[i] - move;
			}
			if ( tab[i] < 97 ){
				tab[i] = tab[i] + 26;
			}
		}
		if( tab[i] >= 65 && tab[i] <= 90 ){
			if( tab[i] >= 65 && tab[i] <= 90 ){
				tab[i] = tab[i] - move;
			}
			if ( tab[i] < 65 ){
				tab[i] = tab[i] + 26;
			}
		}
	}
}

int main(){
	int p, move, i;
	char tab[max_tab], *ptab;
	
	p=27; //move factor, p>0 !
	//move= p%26; 
	move=18;
	printf("p: %d\nmove: %d\n", p, move);

	ptab = fgets(tab, max_tab, stdin);

	printf("\nString(original): ");
	for( i = 0; i < max_tab; i++){
		if ( tab[i] != -52 ){
			printf("%c", tab[i]);
		}
	}
	printf("\n");

	Cesar(tab, move, max_tab);
	printf("String(crypted): ");
	for( i = 0; i < max_tab; i++){
		if ( tab[i] != -52 ){
			printf("%c", tab[i]);
		}
	}
	printf("\n");

	CesarDecryption(tab, move, max_tab);
	printf("String(decrypted): ");
	for( i = 0; i < max_tab; i++){
		if ( tab[i] != -52 ){
			printf("%c", tab[i]);
		}
	}
	printf("\n");

	system("PAUSE");
	return EXIT_SUCCESS;
}