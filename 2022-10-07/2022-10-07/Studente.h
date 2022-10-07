/*Definire il tipo di dato studente, utilizzando il costrutto struct, contenente le seguenti componenti:
matricola: intero
nome: stringa
cognome: stringa
eta: intero
*/

#include <iostream>
#include <string>
using namespace std;

class Studente {
	private:
		int matricola;
		string nome;
		string cognome;
		int eta;

	public:
		int getMatricola() {
			return matricola;
		}

		string getNome() {
			return nome;
		}

		string getCognome() {
			return cognome;
		}

		int getEta() {
			return eta;
		}

		//set
		void setMatricola(int mat) {
			if (mat >= 255312 && mat <= 499999) {
				matricola = mat;
			}
			else {
				cout << "Valore non impostato." << endl;
			}
		}

		void setNome(string name) {
			if (name.length() >= 0 && name.length() <= 30) {
				nome = name;
			}
			else {
				cout << "Valore non impostato." << endl;
			}
		}

		void setCognome(string surname) {
			if (surname.length() >= 0 && surname.length() <= 30) {
				cognome = surname;
			}
			else {
				cout << "Valore non impostato." << endl;
			}
		}

		void setEta(int age) {
			if (age >= 12 && age <= 105) {
				eta = age;
			}
			else {
				cout << "Valore non impostato." << endl;
			}
		}
};
