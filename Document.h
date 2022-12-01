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

    //constructeurs
    Document(string &titre, string *resume, string auteur);

    Document(const Document &copie);

    //destructeur
    ~Document();

    //methodes
    void afficher();

    Document *clonage();

    Document &operator=(const Document &d2);

    //2e façon de faire
    //donne acces a Livre aux attributs prives de Document
    friend class Biblio;
};


#endif //S7_CPP_TP3_DOCUMENT_H
