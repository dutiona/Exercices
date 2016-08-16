Git, Cmake et compilation.

- Avoir visual 2013 et/ou 2015 d'installé sur sa machine.

Télécharger et installer cmake : https://cmake.org/download/
Télécharger et installer git : https://git-for-windows.github.io/
Télécharger et installer smartgit en licence non commerciale : http://www.syntevo.com/smartgit/

Step 1 : obtenir une copie locale du repo.
Depuis smartgit faire Repository > clone > entrer l'adresse fournie à https://github.com/dutiona/Exercices sous le bouton "Clone or download" soit https://github.com/dutiona/Exercices.git.
Donner un répertoire de destination sur le disque (exemple : d:\workspace\Exercices)
Cliquer ok et attendre que tout se passe bien

Step 2 : générer la solution visual avec cmake
Ouvrir cmake-gui (depuis le menu démarer)
Source code : D:/workspace/Exercices
Build the binaries : D:/workspace/Exercices/vs2013x64 ou vs2015x64
Cliquer sur configure, sélectionner MSVC 2015 x64
2 lignes rouges vont apparaitre. Changer CMAKE_INSTALL_PREFIX de c:/Program Files/Exercices à D:/perso/Exercices/vs2013x64/install
Refaire configure
Cliquer sur generate

Step 3 : compilation
Aller dans D:\workspace\Exercices\vs2013x64, ouvrir Exercices.sln
Clique droit sur ALL_BUILD, generate
Clique droit sur Basic > set as startup project
Clique sur la flèche verte.

Test de l'instalation du binaire :
Clique droit sur INSTALL
aller dans D:\workspace\Exercices\vs2013x64\install
Executer Basic.exe et vérifier qu'on a le résultat attendu.

Ressources à survoler :
https://git-scm.com/book/fr/v2
https://cmake.org/