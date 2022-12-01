#include <iostream>

using namespace std;

#include "Document.h"
#include "Livre.h"
#include "Article.h"
#include "Biblio.h"

int main() {
    //TODO test ce pb de reference copiee qui modifie la valeur a des moments non voulus

    cout << "//creation + affichage de doc1:" << endl;
    string titreDoc1 = "rapport sur le climat";
    string resumeDoc1 = "ca va mal";
    string *ptrResumeDoc1 = &resumeDoc1;
    Document doc1(titreDoc1, ptrResumeDoc1, "Jean-Jacques Levert");
    doc1.afficher();
    cout << "\n" << endl;

    cout << "//test classe Biblio" << endl;
    cout << "//Creation d'une bibliotheque de Documents + affichage" << endl;
    Biblio biblio;

    cout << "//on tente d'afficher une bibliotheque vide:" << endl;
    biblio.afficher();
    cout << "\n" << endl;

    cout << "//ajout d'un doc avec biblio.ajout(new Document (doc1));" << endl;
    biblio.ajouter(new Document(doc1));
    cout << "//biblio.afficher(); :" << endl;
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

    cout<<"//test de biblio.rechercher(""zrtpq"") :"<<endl;
    biblio.rechercher("zrtpq");
    cout<<"//test de biblio.rechercher(""Le livre de la jungle"") :"<<endl;
    biblio.rechercher("Le livre de la jungle");



    return 0;
}
