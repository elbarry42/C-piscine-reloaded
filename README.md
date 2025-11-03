🧠 Piscine Reloaded – Mon premier projet à 42 Lyon 🎓

Bienvenue dans Piscine Reloaded ! 🚀
Ce projet marque le début de mon parcours à l’École 42 Lyon.
L’objectif : réviser et consolider toutes les bases apprises pendant la piscine C — fonctions, boucles, pointeurs, structures… tout y passe ! 💪

⸻

📝 Description du projet

Piscine Reloaded est une série d’exercices progressifs permettant de réactiver les notions fondamentales du langage C.
C’est une excellente occasion de renforcer les bases indispensables pour la suite du cursus, tout en se familiarisant avec la rigueur de la Norminette et les outils de compilation.

⸻

⚙️ Contenu principal

Le projet est composé de 27 exercices, couvrant plusieurs domaines essentiels :

🔤 Gestion de l’affichage et des caractères :
	•	ft_print_alphabet : affiche l’alphabet en minuscules.
	•	ft_print_numbers : affiche les chiffres de 0 à 9.
	•	ft_is_negative : affiche ‘N’ ou ‘P’ selon le signe du nombre.

🔁 Manipulation de pointeurs et de variables :
	•	ft_ft : affecte la valeur 42 à un entier via un pointeur.
	•	ft_swap : échange les valeurs de deux entiers.
	•	ft_div_mod : calcule la division et le reste entre deux entiers.

🧮 Fonctions mathématiques :
	•	ft_iterative_factorial / ft_recursive_factorial : calculs de factorielle (itératif et récursif).
	•	ft_sqrt : calcule la racine carrée entière d’un nombre.
	•	ft_abs.h : macro retournant la valeur absolue d’un entier.

🧵 Chaînes de caractères :
	•	ft_putstr : affiche une chaîne de caractères.
	•	ft_strlen : calcule la longueur d’une chaîne.
	•	ft_strcmp : compare deux chaînes.
	•	ft_strdup : duplique une chaîne de caractères avec malloc.

🧠 Tableaux et structures :
	•	ft_range : crée un tableau d’entiers dans un intervalle donné.
	•	ft_point.h : structure contenant deux coordonnées (x, y).
	•	ft_foreach : applique une fonction à chaque élément d’un tableau.
	•	ft_count_if : compte le nombre d’éléments répondant à une condition.

🧰 Gestion de fichiers et Makefile :
	•	display_file : affiche le contenu d’un fichier donné en argument.
	•	Makefile : compilation automatique avec les règles all, clean, fclean, re.

⸻

🛠️ Compilation et utilisation

Chaque exercice est indépendant et possède son propre dossier (ex00, ex01, etc.).
La compilation se fait manuellement ou via un Makefile pour les projets concernés.

Exemple pour compiler et exécuter un exercice :

gcc -Wall -Wextra -Werror ft_strlen.c main.c -o strlen_test
./strlen_test


⸻

🚀 Objectifs du projet

Ce projet m’a permis de :
	•	Réviser les fondamentaux du C (pointeurs, boucles, fonctions, mémoire, etc.).
	•	Apprendre à travailler sous contrainte et respecter la Norminette.
	•	Découvrir l’importance des Makefiles et des règles de compilation.
	•	Renforcer mes compétences en autonomie et peer-learning.

⸻

💡 Exemple d’utilisation

#include "ft_strlen.c"
#include <stdio.h>

int main(void)
{
    char *str = "Hello 42!";
    printf("La longueur de la chaîne est : %d\n", ft_strlen(str));
    return (0);
}

Résultat attendu :

La longueur de la chaîne est : 9


⸻

🤝 Contribution et apprentissage

Ce projet est réalisé dans le cadre de ma formation à 42 Lyon.
Il fait partie du processus d’apprentissage collaboratif fondé sur le peer-learning :

“Apprendre à apprendre, à échouer, à recommencer et à s’améliorer.”

Toute suggestion ou discussion autour du code est la bienvenue ! 😊

⸻

🛡️ Licence

Projet académique sous licence École 42.
Utilisation et modification libres pour l’apprentissage.

⸻

✨ Merci d’avoir visité mon projet Piscine Reloaded !
📚 « Le code s’apprend par la pratique, pas par la triche. »
