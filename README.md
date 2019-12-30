# is_Prime

## Description

*Création d'un programme qui renvoie si le nombre donné en argument est premier ou non.*

*Les nombres premiers sont des nombres qui ne possèdent seulement 2 diviseurs (1 et lui-même).*

### Méthode

Tout d'abord, le nombre entré en argument est récupéré grâce à la fonction `strtol()`.

	int nb = strtol(argv[1], &endptr, 10);
---
Par la suite, on vérifie si le nombre est 0 ou 1, dans ce cas là, le nombre ne sera pas premier.

	if (nb == 0 || nb == 1) {
		printf("%d n'est pas un nombre premier.\n", nb);
		return (0);
	}
---
Puis, on crée un entier `i` de la valeur de `nb - 1`, dans une boucle tant que `i` est différent de 1 on le décrémente.

A chaque tour de boucle, on vérifie si le modulo de `nb` par `i` est égale à 0.

Si `nb % i = 0` alors le nombre n'est pas premier.

Sinon, `nb` est premier car il n'a aucun diviseur autre que 1 et lui même.

	for (i = nb - 1; i != 1; i--) {
		if (nb % i == 0) {
			premier = 0;
			break;
		}
	}
---	
Enfin, on vérifie si `premier` est égale à 0 ou 1.

Si il est égale à 0 alors on affiche :

	printf("%d n'est pas un nombre premier.\n", nb);

Sinon :

	printf("%d est premier.\n", nb);
	
### Conclusion

La réalisation de ce programme est intéressante dans la partie algorithme, ici, j'ai utilisé le test de primalité (pouvant être optimisé en utilisant la racine carré de `nb` à la place de `nb - 1`). Cet algorithme consiste à verifier chaque diviseur de nb, si il en possède c'est qu'il n'est pas premier.
	
(cf : <https://www.labri.fr/perso/betrema/deug/poly/premiers.html>).