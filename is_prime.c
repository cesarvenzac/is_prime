#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc, char **argv)
{
    if (argc < 2 || argc > 2) {
	puts("Erreur: le nombre d'argument est invalide.\n");
	exit(87);
    }

    char *endptr;
    int nb = strtol(argv[1], &endptr, 10);
    int i = 0;
    int premier = 1;

    if (nb == 0 || nb == 1) {
	printf("%d n'est pas un nombre premier.\n", nb);
	return (0);
    }
    
    if (endptr[0] != '\0')
	printf("Erreur: '%s' caractère(s) invalide(s)\n", endptr);
    else
	for (i = nb - 1; i != 1; i--) {
	    if (nb % i == 0) {
		premier = 0;
		break;
	    }
	}
    if (premier != 0)
	printf("%d est un nombre premier.\n", nb);
    else
	printf("%d n'est pas un nombre premier.\n", nb);
    return (0);
}

