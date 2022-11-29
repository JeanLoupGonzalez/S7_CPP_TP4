#include <iostream>

using namespace std;

#include "Document.h"
#include "Livre.h"
#include "Article.h"

int main() {

    //test constructeur Document
    string resume1 = "Nemo se fait kidnapper et son pere le retrouve a l'aide d'un poisson bleu amnesique";
    string *ptr_resume1 = &resume1;//pointe vers l'adresse de resume1
    string titre1 = "Nemo";
    Document doc1(titre1, ptr_resume1, "Oualt Disnet");

    //test doc.afficher()
    cout<<"//test doc1.afficher();"<<endl;
    doc1.afficher();
    cout << "\n" << endl;

    //test constructeur copie
    cout<<"//test constructeur copie avec Document doc2(doc1);"<<endl;
    cout<<"//affichage de doc2"<<endl;
    Document doc2(doc1);
    doc2.afficher();
    cout << "\n" << endl;

    //test clonage
    //creation d'un document que l'on va cloner
    string resume3 = "Un mutant aux cheveux blancs sauve le monde";
    string *ptr_resume3 = &resume3;//pointe vers l'adresse de resume1
    string titre3 = "The Ouicheur";
    Document doc3(titre3, ptr_resume3, "Zksizymski");

    cout << "//affichage de doc3 (que l'on va cloner) dans un nouveau Document doc5" << endl;
    doc3.afficher();
    cout << "\n" << endl;

    cout << "//Test clonage : Document doc5(*(doc3.clonage())); " << endl;
    cout << "//affichage de doc5 " << endl;
    Document doc5(*(doc3.clonage()));
    doc5.afficher();
    cout << "\n" << endl;


    //test Livre
    //creation et affichage d'un livre
    cout << "//On cree un Livre que l'on affiche avec livre1.afficher();" << endl;
    Livre livre1(titre3, ptr_resume3, "Zksizymski",
                 "pocheEdition", "56");
    livre1.afficher();
    cout << "\n" << endl;

    cout <<"//Test constructeur copie, affichage de livre4(livre1) : "<<endl;
    Livre livre4(livre1);
    livre4.afficher();
    cout << "\n" << endl;

    //test clonage pour livre
    cout << "//On clone livre1 ds un nouveau Livre livre2;" << endl;
    cout << "//affichage livre2;" << endl;
    Livre livre2(*(livre1.clonage()));
    livre2.afficher();
    cout << "\n" << endl;

    //test Article
    cout << "//test classe article, on cree et on affiche un article1: " << endl;
    string titre6 = "Un collegien passe le brevet";
    string resume6 = "tout est dans le titre";
    string *ptr_resume6 = &resume6;
    Article article1(titre6, ptr_resume6, "Michel Fustere", "La revue qui revoit",
                     "la cabane de la presse", "1589635987425");
    article1.afficher();
    cout << "\n" << endl;

    cout <<"//Test constructeur copie, affichage de article4(article1) : "<<endl;
    Article article4(article1);
    article4.afficher();
    cout << "\n" << endl;

    //test clonage pour article
    cout << "//On clone article1 ds un nouveau Article article5;" << endl;
    cout << "//article5(*(article1.clonage())); puis affichage de article5;" << endl;
    Article article5(*(article1.clonage()));
    article4.afficher();
    cout << "\n" << endl;

    //test operateur affectation

    //pour document
    cout << "//test operateur affectation pour Document" << endl;
    cout << "//doc1=doc3 (nemo devient le doc the ouicheur)" << endl;
    cout << "//affichage doc1" << endl;
    doc1 = doc3;
    doc1.afficher();
    cout << "\n" << endl;

    //creation d'un autre livre pour tester la classe Livre
    string resumeLivre3 = "Une histoire de grand frere";
    string *ptdr_resumeLivre3 = &resumeLivre3;
    string titreLivre3 = ("1894");
    Livre livre3(titreLivre3, ptdr_resumeLivre3, "Jorj Orouelle", "plamarion", "1984");

    cout << "//test operateur affectation pour Livre" << endl;
    cout << "//livre1=livre3 (""the ouicheur" "prend les valeurs du livre 1894)\n" << endl;
    livre1 = livre3;
    livre1.afficher();
    cout << "\n" << endl;

    //creation d'un article pour tester la classe Article
    string titre7 = "L'eau va disparaitre d'ici 30 ans";
    string resume7 = "Quand l'eau va disparaitre, on aura soif";
    string *ptr_resume7 = &resume7;
    Article article3(titre7, ptr_resume7, "Michel Fustere", "siance et vue",
                     "MJ Presse", "3");

    cout << "//test operateur affectation pour Article" << endl;
    cout << "//article1=article3 (article du collegien prend les valeurs"
            "de l article sur l eau" << endl;
    article1 = article3;
    article1.afficher();
    cout << "\n" << endl;


    return 0;
}
