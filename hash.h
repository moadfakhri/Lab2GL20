#include <iostream>
#include <string>

using namespace std;

#ifndef HASH_H_INCLUDED
#define HASH_H_INCLUDED

class hash1{
    private:
        static const int tailleTableau = 10;

        struct item{
                string nom;
                string tel;
                item* next;
        };

        item* HashTable[tailleTableau];

    public:
        hash1();
        int HASH(string cle);

        // les fonctions à developper


        //void ajouterItem(string nom, string tel);
        //void afficherItem();

        //int  nombreItems(int index);
        void afficherItemsDansIndex(int index); // les items qui ont le même resultat de hashage et qui sont empilés
        //void chercherItem(string nom);
        //void supprimerItem(string nom);

//        Un problème d’un entrevue chez Google.
//        Soit une fonction qui prend comme paramètre une chaine de caractères et retourne le premier caractère récurrent dans la chaine.
//        “ABCA”    ‘A’
//        “BCABA” –>  ‘B’
//        “ABC”  NULL


};

#endif // HASH_H_INCLUDED
