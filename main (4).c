/******************************************************************************

Paulo Henrique Fernandes Dias

19/09/22

*******************************************************************************/
#include <stdio.h>
int imprime (char var, int x) {
    for (int l=1; l<=x; l++){
        for (int c=1; c <= l; c++){
            printf ("%c", var);
        }
        printf ("\n");
    }
    return (1+x)*x/2;
}

int main() {
    int qtde;
    qtde = imprime ('/',4);
    
    printf ("Foram impressos %d caracteres no primeiro e %d no segundo", qtde, imprime ('!',5) );
    return 0;
}


