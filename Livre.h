//
// Created by jl on 23/11/22.
//

#ifndef S7_CPP_TP3_LIVRE_H
#define S7_CPP_TP3_LIVRE_H

#include "Document.h"

class Livre : public Document {
    string editeur;
    string anneeParu;

public:
    Livre(string &titre, string *resume, string auteur, string editeur, string annee);

    Livre(const Livre &l);

    void afficher();

    Livre* clonage();

    Livre& operator=(const Livre &l2);

};


#endif //S7_CPP_TP3_LIVRE_H
