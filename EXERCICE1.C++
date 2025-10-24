#include <iostream>
#include <string>

using namespace std;

class CompteBancaire {
private:
    string titulaire;
    double solde;

public:
    
    CompteBancaire();

    void definirTitulaire(string nom);
    void depot(double montant);
    void retrait(double montant);
};

CompteBancaire::CompteBancaire() {
    titulaire = "";
    solde = 0.0;
}

void CompteBancaire::definirTitulaire(string nom) {
    titulaire = nom;
}

void CompteBancaire::depot(double montant) {
    solde += montant;
    cout << "Solde après dépôt : " << solde << endl;
}

void CompteBancaire::retrait(double montant) {
    if (montant <= solde) {
        solde -= montant;
        cout << "Solde après retrait : " << solde << endl;
    } else {
        cout << "Solde insuffisant pour effectuer le retrait !" << endl;
    }
}

int main() {
    CompteBancaire compte1;

    compte1.definirTitulaire("Mohamed Lachgar");

    cout << "Titulaire : Mohamed Lachgar" << endl;

    compte1.depot(500.0);
    compte1.retrait(200.0); 

    return 0;
}
