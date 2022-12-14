//
// Created by jl on 31/10/22.
//
#include <iostream>

using namespace std;

#ifndef S7_CPP_TP3_DOCUMENT_H
#define S7_CPP_TP3_DOCUMENT_H


class Document {
    //1ere façon de faire
    //donne accces à ces attributs qu'aux classes filles
protected:
    string &titre;
    string *resume;
    string auteur;

public:
    //transforme la classe en classe virtuelle pure (    =0     )
    virtual int coutDoc() = 0;

    //constructeurs
    Document(string &titre, string *resume, string auteur);

    Document(const Document &copie);

    //destructeur
    ~Document();

    //methodes
    virtual void afficher();

    //ne doit pas exister ds une classe abstraite
    //car on ne peut faire instancier un new Document!
    //Document *clonage();

    Document &operator=(const Document &d2);

    //2e façon de faire
    //donne acces a Livre aux attributs prives de Document
    friend class Biblio;
};


#endif //S7_CPP_TP3_DOCUMENT_H
