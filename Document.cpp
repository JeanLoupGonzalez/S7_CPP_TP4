//
// Created by jl on 31/10/22.
//

#include "Document.h"

//constructeurs
Document::Document(string &titre, string *resume, string auteur) : titre(titre),
                                                                   auteur(auteur) {
    this->resume = new string(*resume);
}


Document::Document(const Document &copie) : titre(copie.titre), auteur(copie.auteur) {
    this->resume = new string(*copie.resume);
}

//destructeur
Document::~Document() {
    delete this->resume;
}

//methodes
void Document::afficher() {
    cout << "Titre : " << this->titre << endl;
    cout << "Auteur : " << this->auteur << endl;
    cout << "Resume : " << *(this->resume) << endl;
}

/*
Document *Document::clonage() {
    //crée un pointeur vers une copie du document à cloner
    Document *ptr = new Document(*this);
    return ptr;
}*/

Document &Document::operator=(const Document &d2) {
    if (this != &d2) {
        this->titre = d2.titre;
        this->resume = new string(*d2.resume);
        this->auteur = d2.auteur;
    }
    return *this;
}


