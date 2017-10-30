#include <stdio.h>

int main(void)
{
        int variable = 10;
        int *puntero = &variable;
        *puntero = 10;
        printf("&variable : %p\n", &variable);
        printf("puntero   : %p\n", puntero);
        printf("&puntero  : %p\n", &puntero);
        printf("variable  : %d\n", variable);
        printf("*puntero  : %d\n", *puntero);
        printf("Tamanio de puntero  : %d bits\n", sizeof(puntero)*8);
        return 0;
}

void sawp(int *px, int *py){
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
}
