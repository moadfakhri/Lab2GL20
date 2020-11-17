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
<<<<<<< Updated upstream
//fct qui affiches tous les items
void hash1::afficherItems(){
=======
void hash1::afficherItem(){
>>>>>>> Stashed changes
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
<<<<<<< Updated upstream
=======
}

int hash1::nombreItems(int index) {

    int conteur = 0;
    item* currentItem = HashTable[index];

    while (currentItem != NULL) {
        currentItem = currentItem -> next;
        conteur++;
    }
    return conteur;
>>>>>>> Stashed changes
}
