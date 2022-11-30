//
// Created by Jean Loup on 29/11/2022.
//

#ifndef S7_CPP_TP3_BIBLIO_H
#define S7_CPP_TP3_BIBLIO_H

#include "Document.h"
#include <list>
using namespace std;


class Biblio {
    list <Document> tab;
public:
    Biblio();

    void ajoutDoc(Document *doc);

    string rechercheDoc(string titre);

    void afficher();

};


#endif //S7_CPP_TP3_BIBLIO_H
