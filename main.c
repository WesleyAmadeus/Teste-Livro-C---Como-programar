#include <stdio.h>
#include <stdlib.h>

int main()

{
    int nota[2];

    printf("QUAL FOI A NOTA:\n" );
    scanf("%i", nota);

    char aluno [15];
    printf("QUAL O NOME DO ALUNO:\n" );
    scanf("%d", aluno);


   if ( nota >= 7 ) {
            printf(" %d, sua nota foi %i,  voce foi aprovada\n", &aluno, &nota);
    }
    else {
           printf("Voce foi reprovada\n");
    }


    return 0;
}
