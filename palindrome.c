#include <stdio.h>
#include <string.h>

void esPalindromo(char word[]){
	int i = 0;
	int l = strlen(word) -1;
	while (l > i){
		if(word[i++] != word[l--]){
			printf("La palabra ingresa no es palindromo\n");
return;		
		}	
	}
	printf("La palabra ingresada es palindromo\n");
return;
}

void main(){
	esPalindromo("apellido");
	esPalindromo("acabaca");
	esPalindromo("tesest");
}
