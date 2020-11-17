#include <iostream>
#include <string>
#include "hash.h"

using namespace std;

int hash1::HASH(string cle)
{
    int index;
    int hashage = 0;

    //for sur le nombre de char de cle
    for(auto c : cle)
    {
        hashage += c;
    }

    // modulo de la sommme des codes ascii sur tailleTableau

    index = hashage % tailleTableau;


    return index;
}

hash1::hash1(){
     for (int i = 0; i<tailleTableau; i++){
        HashTable[i] = new item;
        HashTable[i]->nom = "vide";
        HashTable[i]->tel = "vide";
        HashTable[i]->next = NULL;
     }
}

void hash1::afficherItemsDansIndex(int index)
{
    auto current_item = HashTable[index]->next;
    while (current_item != NULL)
    {
        cout << "Nom : " << current_item->nom << " "<< "Tel : " << current_item->tel << endl;
        current_item = current_item->next;
    }
}