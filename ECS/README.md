Coder un Entity Component System

Description et exemple : http://guillaume.belz.free.fr/doku.php?id=ecs

Proposer une impl�mentation qui permet de g�rer une publication d'�v�nements :
 - un component fait une action, il publie un �v�nement
 - un autre component qui avait souscrit soit � cet �v�nement pr�cis (eventID par exemple) soit � ce type d'�v�nement (par type, exemple le component de rendu graphique souscrit � tous les event de type ChangementPosition, ChangementArmure, etc.) soit notifi�
 - chaque component doit fonctionner de mani�re asynchrone
 
Objectifs :
 - comprendre la s�mentique de valeur, d'entit�, le principe de responsabilit� et de dur�e de vie
 - designer un framework pour ensuite impl�menter un truc graphique sympa