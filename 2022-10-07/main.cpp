#include <iostream>
#include <string>

/*Definire il tipo di dato studente, utilizzando il costrutto struct, contenente le seguenti componenti:
matricola: intero
nome: stringa
cognome: stringa
eta: intero
*/

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
			return nome;
		}

		int getEta() {
			return eta;
		}
			
		//set
		void setMatricola(int mat) {
			matricola = mat;
		}

		void setNome(string name) {
			nome = name;
		}

		void setCognome(string surname) {
			cognome = surname;
		}

		void setEta(int age) {
			eta = age;
		}
};

int main() {

	Studente pippo;

	pippo.setNome("Ciao");

	cout << pippo.getCognome();

	return 0;
}