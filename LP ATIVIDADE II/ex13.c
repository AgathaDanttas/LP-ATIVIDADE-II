#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    int n1,n2;

    printf ("Inform um numero:");
    scanf ("%d",&n1);
    printf ("Inform um numero:");
    scanf ("%d",&n2);

    n1 > n2 ? printf ("%d e o maior numero",n1) : printf("%d e o maior numero",n2);
    n1 < n2 ? printf ("%d e o menor numero",n1) : printf("%d e o menor numero",n2);
 return 0;
}