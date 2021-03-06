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

void hash1::ajouterItem(string nom, string tel)
{
    int index = HASH(nom);
    item hashItem;
    hashItem.nom = nom;
    hashItem.tel = tel;
    hashItem.next = NULL;
    if (HashTable[index]->nom == "vide")
    {
        HashTable[index] = hashItem;
    }
    else
    {
        item *next = HashTable[index]->next;
        while (next != NULL)
        {
            next = next->next;
        }
        next = &hashItem;
    }
}

void hash1::afficherItem()
{
    for (int index = 0; index < tailleTableau; index++)
    {
        afficherItemsDansIndex(index);
    }
};

hash1::hash1()
{
    for (int i = 0; i < tailleTableau; i++)
    {
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


int hash1::nombreItems(int index) {

    int conteur = 0;
    item* currentItem = HashTable[index];

    while (currentItem != NULL) {
        currentItem = currentItem -> next;
        conteur++;
    }
    return conteur;
}

void hash1::chercherItem(string nom){
            int h = HASH(nom);
            bool b = false;
            item* en = HashTable[h];
            if (en != NULL){
                while (en != NULL)
                {
                    if(en -> nom == nom){ b = true;}
                    if (b)
                    {
                        cout << "Element trouvé";
                        break;
                    }
                    en -> next;
                }
                if (!b)
                {
                    cout << "Element"<< nom << "non existant";
                }
            }
        }

void hash1::supprimerItem(string nom){

    int index = HASH(nom);
    item* currentItem = HashTable[index];
    item* previousItem = HashTable[index];

    while (currentItem != NULL) {

        if (currentItem ->nom == nom) {
            previousItem ->next = currentItem ->next;
            free(currentItem);
            cout << "elt supprime!" << endl;
        }

        previousItem = currentItem;
        currentItem = currentItem ->next;
    }
}
