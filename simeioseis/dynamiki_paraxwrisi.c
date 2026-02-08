#include <stdlib.h>
#include <stdio.h>

/*
    EXEI ZHTITHEI STIS TELIKES EPI GOULIANA
*/

void antithetosAntistrofosA(int a, int *antithetos, float *antistrofos) {
    *antistrofos = 1.0 / a;
    *antithetos = -a;
}

int main(void) {
    /**
     * DYNAMIKI PARAXWRISI MNHMHS MESW MALLOC:
     * gia kathe metavliti zitoume apo tin mnii sorou (HEAP MEMORY)
     * na mas paraxwrisei osa bytes xreiazetai gia tin kathe metavliti
     * px: mia metavliti int xreiazetai 4 bytes, mia float ki auti 4 bytes ktlp..
     * (!) einai pointers oi parakatw:
     */
    int *a = malloc(sizeof(int));
    int *antithetos = malloc(sizeof(int));
    float *antistrofos = malloc(sizeof(float));

    printf("Dwse arithmo a: ");
    scanf("%d", a);

    antithetosAntistrofosA(*a, antithetos, antistrofos);

    printf("antithetos = %d \n", *antithetos);
    printf("antistrofos = %f \n", *antistrofos);
    printf("timi a = %d \n", *a);

    // PREPEI NA APODESMEUSOUME TIN MNHMH STO TELOS TOU PROGRAMMATOS
    free(a);
    free(antithetos);
    free(antistrofos);

    system("pause");
    return 0;
}