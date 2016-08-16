Collection d'exercices pour se remettre à niveau en c++11.

Ressources :
*Cours pour débutant : http://guillaume.belz.free.fr/doku.php?id=programmez_avec_le_langage_c *
Deux très bon bouquins :
- C++ Primer
- Programming: Principles and Practice Using C++

Livre de référence une fois intermédiaire pour toutes les guidelines : Effective modern c++
Site où ya des liens sympas : https://zestedesavoir.com/forums/sujet/2376/banque-de-liens/


Trois sites incontournables :
- http://www.cplusplus.com/reference/std/
- http://en.cppreference.com/w/
- https://isocpp.org/faq
 
 
Header important c++11 :
- <functional> : facilite le passage/la définition de foncteur à la volé.  Voir les lambda pour plus d’infos
- <chrono> : pour la mesure du temps
- <memory> : pour std ::shared_ptr std ::unique_ptr std::make_shared std::make_unique (super important). Ne jamais utiliser new et delete.
- <random> : pour remplacer rand() : https://channel9.msdn.com/Events/GoingNative/2013/rand-Considered-Harmful
- <string> : … ^^
- <algorithm> <numeric> <utility> : contient des trucs cool pour les collections à itérateur.

- Multi-threading : <thread> <atomic> voir <mutex>
- IO : <iostream> <fstream> <sstream>
- Containers : <array> qui remplace int a[15] -> std::array<int, 15>.
- <vector> : dans le doute, toujours utiliser vector.
- Voir dans std : map, list, queue, deque, stack
- Voir aussi : boost::small_vector, boost::flat_set etc. pour des usages plus occasionnels.
 
- <omp.h> (OpenMP) est de base dans VC. Pas besoin d’ajouter une dépendance.
Pour le parallélisme intrusif mais super performant, il ya TBB, MSVC a un fork qui fonctionne pareil : <ppl.h>
- Besoin de faire du CUDA : Visual peut embarquer le plugin nvidia nSight pour débugger les kernel qui ont été transféré sur ton GPU. Il y a même moyen de sélectionner les numéros de block et de thread/block qu'on veut inspecter. C’est de la tuerie.
 
 
Le  principal avantage (et ce qu’il faut retenir) de c++11 c’est qu’on translate la problématique de gestion de mémoire en : durée de vie + responsabilité (de destruction).
Donc le problème n’est plus « est-ce que à cet endroit-là je vais libérer ma mémoire » mais « qui est responsable de la destruction de cet objet ? Dans quel scope doit-il survivre ? »
 
2nd avantage du c++11 (un peu plus poussé) : la move sémantique et le perfect forwarding : std ::move, std ::forward. Démystification des lvalue, des rvalue et des « universal reference »
- https://channel9.msdn.com/Shows/Going+Deep/Cpp-and-Beyond-2012-Scott-Meyers-Universal-References-in-Cpp11
- https://isocpp.org/blog/2012/11/universal-references-in-c11-scott-meyers
 
Introduction au c++ modern :
- http://herbsutter.com/elements-of-modern-c-style/
Uitilisation des smart pointers :
- http://herbsutter.com/2013/05/29/gotw-89-solution-smart-pointers/
- http://herbsutter.com/2013/06/05/gotw-91-solution-smart-pointer-parameters/
Le mot-clé auto :
- http://herbsutter.com/2013/06/07/gotw-92-solution-auto-variables-part-1/
- http://herbsutter.com/2013/06/13/gotw-93-solution-auto-variables-part-2/
- http://herbsutter.com/2013/08/12/gotw-94-solution-aaa-style-almost-always-auto/
Les lambda (le header algorithm a été conçu pour fonctionner avec) :
- http://stackoverflow.com/questions/7627098/what-is-a-lambda-expression-in-c11
 
Et enfin, les deux talk de référence pour partir sur de bonnes bases avec le c++ moderne :
- https://channel9.msdn.com/Events/CPP/CppCon-2015/Writing-Good-C-14
- https://channel9.msdn.com/Events/CPP/CppCon-2015/Writing-Good-C14-By-Default

Et enfin les guidelines GSL : https://github.com/Microsoft/GSL
