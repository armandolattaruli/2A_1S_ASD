/*ESERCIZI
realizzare il metodo trasposta(), che restituisce la trasposta di una matrice
realizzare il metodo prodotto(matrice M), che restituisce il prodotto di due matrici*/

#include <iostream>
using namespace std;

typedef double tipoelem;

class matrice {
    public:
        int getRighe();
        int getColonne();
        void setRighe(int r);
        void setColonne(int c);

        matrice(int, int); /* costruttore */
        tipoelem leggimatrice(int i, int j);
        void scrivimatrice(int i, int j, tipoelem valore);   

        matrice prodottoScalare(int scalare);

    private:
        int righe;
        int colonne;
        tipoelem** elementi;
};

void matrice::setRighe(int r) {
    righe = r;
}

void matrice::setColonne(int c) {
    colonne = c;
}

int matrice::getRighe() {
    return righe;
}

int matrice::getColonne() {
    return colonne;
}

// costruttore
matrice::matrice(int c, int r) {
    colonne = c;
    righe = r;
    // allocazione dinamica della matrice
    int i;
    elementi = new tipoelem*[righe];

    for (i = 0; i < righe; i++) {
        elementi[i] = new tipoelem[colonne];
    }

    // inizializzazione degli elementi
    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
            elementi[i][j] = rand() % 100;
        }
    }
    
}

tipoelem matrice::leggimatrice(int i, int j) {
    return elementi[i][j];
}

void matrice::scrivimatrice(int i, int j, tipoelem valore) {
    elementi[i][j] = valore;
}

matrice matrice::prodottoScalare(int scalare) {
    matrice matScalata(righe, colonne);

    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
            matScalata.elementi[i][j] = elementi[i][j] * scalare;            
        }        
    }
    
    return matScalata;
}
