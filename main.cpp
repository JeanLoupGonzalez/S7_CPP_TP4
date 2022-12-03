#include <iostream>

using namespace std;

#include "Document.h"
#include "Livre.h"
#include "Article.h"
#include "Biblio.h"

int main() {
    cout << "//test classe Biblio" << endl;
    cout << "//Creation d'une bibliotheque de Documents + affichage" << endl;
    Biblio biblio;

    cout << "//on tente d'afficher une bibliotheque vide:" << endl;
    biblio.afficher();
    cout << "\n" << endl;

    cout << "//On rajoute un Livre a biblio  biblio.ajout(new Livre(livre1)); " << endl;
    cout << "//biblio.afficher(); :" << endl;
    string resumeLivre1 = "Un enfant singe vit des aventures";
    string *ptrResumeLivre1 = &resumeLivre1;
    string titreLivre1 = "Le livre de la jungle";
    Livre livre1(titreLivre1, ptrResumeLivre1, "Kipling",
                 "phlammmarion", "2023");
    biblio.ajouter(new Livre(livre1));
    biblio.afficher();

    cout << "//On rajoute un Article a biblio  biblio.ajout(new Article(article1)); " << endl;
    cout << "//biblio.afficher(); :" << endl;
    string titreArticle1 = "Les humains auront 6 doigts d ici quelques siecles";
    string resumeArticle1 = "tout est dans le titre";
    string *ptrResumeArticle1 = &resumeArticle1;
    Article article1(titreArticle1, ptrResumeArticle1, "Mahmoud Dubois",
                     "Science et Lit", "Presse France", "158");
    biblio.ajouter(new Article(article1));
    biblio.afficher();

    cout << "//test de biblio.rechercher(""zrtpq"") :" << endl;
    biblio.rechercher("zrtpq");
    cout << "//test de biblio.rechercher(""Le livre de la jungle"") :" << endl;
    biblio.rechercher("Le livre de la jungle");
    cout << "//quand doc trouve, renvoit un pointeur vers ce document" << endl;
    cout << "\n" << endl;

    cout << "//test de biblio.rechercher(""Les humains auront 6 doigts d ici quelques siecles"") :" << endl;
    biblio.rechercher("Les humains auront 6 doigts d ici quelques siecles");
    cout << "\n" << endl;


    cout << "//Test de la fonction de cout" << endl;
    cout << "//livre1.coutDoc()" << endl;
    cout << livre1.coutDoc() << endl;
    cout << "\n" << endl;

    cout << "//article1.coutDoc()" << endl;
    cout << article1.coutDoc() << endl;
    cout << "\n" << endl;

    return 0;
}
