//
// Created by Jean Loup on 29/11/2022.
//

#include "Biblio.h"

Biblio::Biblio() {
}

void Biblio::ajoutDoc(Document *doc) {
    this->tab.push_back(*doc);
}

Document Biblio::rechercheDoc(const string &titre) {
    for (list<Document>::iterator it = this->tab.begin(); it != this->tab.end(); it++){
        if(it->titre==titre){
            cout<<"entree de le if"<<endl;
            //return *it;
        }
        cout<<"ds le for"<<endl;
    }
    cout<<"Aucun titre correspondant trouve\n"<<endl;
    return Document();
}

void Biblio::afficher() {
    if (this->tab.empty()) {
        cout << "biblio vide, rien a afficher" << endl;
    } else {
        int i=1;
        for (list<Document>::iterator it = this->tab.begin(); it != this->tab.end(); it++){
            cout<<"Document "<<i<<": "<<endl;
            it->afficher();
            i++;
        }

    }

}

