//
// Created by jl on 23/11/22.
//

#include "Livre.h"

Livre::Livre(string &titre, string *resume, string auteur, string editeur, string annee) :
        Document(titre, resume, auteur),
        editeur(editeur), anneeParu(annee) {
}

Livre::Livre(const Livre &l) : Document(l.titre, l.resume, l.auteur),
                               editeur(l.editeur), anneeParu(l.anneeParu) {

}


void Livre::afficher() {
    Document::afficher();
    cout << "Editeur : " << this->editeur << endl;
    cout << "Annee de parution : " << this->anneeParu << endl;
    cout << "\n" << endl;
}

Livre *Livre::clonage() {
    Livre *ptr = new Livre(*this);
    return ptr;
}

Livre &Livre::operator=(const Livre &l2) {

    if (this != &l2) {
        this->titre = l2.titre;
        this->resume = new string(*l2.resume);
        this->auteur = l2.auteur;

        this->editeur = l2.editeur;
        this->anneeParu = l2.anneeParu;
    }
    return *this;
}
