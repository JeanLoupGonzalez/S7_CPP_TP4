//
// Created by jl on 23/11/22.
//

#include "Article.h"

Article::Article(string &titre, string *resume, string auteur, string titreRevue, string editeur, string numero) :
        Document(titre, resume, auteur), titreRevue(titreRevue), editeur(editeur), numero(numero) {

}

void Article::afficher() {
    Document::afficher();
    cout << "Titre de la revue : " << this->titreRevue << endl;
    cout << "Editeur : " << this->editeur << endl;
    cout << "Numero edition : " << this->numero << endl;
}

Article *Article::clonage() {
    Article *ptr = new Article(*this);
    return ptr;
}

Article &Article::operator=(const Article &a2) {
    if (this != &a2) {
        this->titre = a2.titre;
        this->resume = new string(*a2.resume);
        this->auteur = a2.auteur;

        this->editeur = a2.editeur;
        this->numero = a2.numero;
        this->titreRevue = a2.titreRevue;
    }
    return *this;
}

Article::Article(const Article &a) : Document(a.titre, a.resume, a.auteur),
                                     editeur(a.editeur), numero(a.numero), titreRevue(a.titreRevue) {

}
