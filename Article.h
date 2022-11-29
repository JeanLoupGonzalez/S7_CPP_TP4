//
// Created by jl on 23/11/22.
//

#ifndef S7_CPP_TP3_ARTICLE_H
#define S7_CPP_TP3_ARTICLE_H

#include "Document.h"


class Article : public Document {
    string editeur;
    string numero;
    string titreRevue;

public:
    Article(string &titre, string *resume, string auteur, string titreRevue, string editeur, string numero);

    Article(const Article &a);

    void afficher();

    Article *clonage();

    Article& operator=(const Article &a2);

};


#endif //S7_CPP_TP3_ARTICLE_H
