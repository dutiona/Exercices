Jeu de la vie

But : se familiariser avec le multithreading (le header <thread>) ainsi que le header <random> et le header <chrono>, et les lambda (dans <functional>)

Coder le jeu de la vie en s�rial
Coder le jeu de la vie en multithread

Bencher avec <chrono> et trouver le meilleur ratio taille de grille vs nb de thread

Enonc�e :
On a une grille 2D de cellule.
Chaque cellule int�ragie avec ses 8 voisins (pour les cellules des bords, consid�rer la grille continue avec l'autre c�t� (faire un modulo))
A chaque tour :
 - chaque cellule vivante avec moins de 2 voisins en vie meurt.
 - chaque cellule vivante avec 2 ou 3 voisins en vie continue de vivre.
 - chaque cellule en vie avec strictement plus de 3 voisins en vie meurt
 - chaque cellule morte avec exactement 3 voisins en vie ressuscite
 
