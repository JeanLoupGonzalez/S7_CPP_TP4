//
// Created by Jean Loup on 29/11/2022.
//

#include "Biblio.h"

Biblio::Biblio() {
}

void Biblio::ajoutDoc(Document *doc) {
    this->tab.push_front(*doc);
}

string Biblio::rechercheDoc(string titre) {

}

void Biblio::afficher() {
    for (list<Document>::iterator it = this->tab.begin(); it != this->tab.end(); it++)
        it->afficher();
}

