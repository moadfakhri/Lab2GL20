#include <iostream>
#include <string>
#include "hash.h"

using namespace std;

int hash1::HASH(string cle)
{
    int index;
    int hashage = 0;

    cout << cle.length();
    //for sur le nombre de char de cle
    for(int i = 0; i< cle.length(); i++)
    {
        // pour chaque char je reccupere le code ascii et je l'ajoute a la somme
        hashage = hashage + (int)cle[i];
        cout << cle[i] << endl;
        cout << hashage << endl;
    }

    // modulo de la sommme des codes ascii sur tailleTableau

    index = hashage % tailleTableau;

    //index = 0;
    cout << index << endl;

    return index;
}
void hash1::afficherItem(){
    for (int index=0;index< tailleTableau ;index++){
        afficherItemsDansIndex(index);
    }
};
hash1::hash1(){
     for (int i = 0; i<tailleTableau; i++){
        HashTable[i] = new item;
        HashTable[i]->nom = "vide";
        HashTable[i]->tel = "vide";
        HashTable[i]->next = NULL;
     }
}
