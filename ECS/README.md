Coder un Entity Component System

Description et exemple : http://guillaume.belz.free.fr/doku.php?id=ecs

Proposer une implémentation qui permet de gérer une publication d'évènements :
 - un component fait une action, il publie un évènement
 - un autre component qui avait souscrit soit à cet évènement précis (eventID par exemple) soit à ce type d'évènement (par type, exemple le component de rendu graphique souscrit à tous les event de type ChangementPosition, ChangementArmure, etc.) soit notifié
 - chaque component doit fonctionner de manière asynchrone
 
Objectifs :
 - comprendre la sémentique de valeur, d'entité, le principe de responsabilité et de durée de vie
 - designer un framework pour ensuite implémenter un truc graphique sympa