#include <iostream>
#include <string>

using namespace std;

int DIM = 5;

//incapsulamento evitato 
class piuGrande{
   public: 
    int valore;
    int posizione;
};

int greaterThan(int v[], int k){
    int maggioriK = 0;
    
    for(int i = 0; i < DIM; i++){
        if(v[i] > k){
            maggioriK++;
        }
    }
    
	return maggioriK;
}

bool member(int v[], int k){
    bool presente = false;
    
    for(int i = 0; i < DIM; i++){
        if(v[i] == k){
            presente = true;
            break;
        }
    }
    
	return presente;
}

piuGrande largest(int v[]){
    piuGrande oggettoMaggiore;
    int max = v[0];
    
    for(int i = 0; i < DIM; i++) {
        if(max < v[i]){
            max = v[i];
            oggettoMaggiore.valore = v[i];
            oggettoMaggiore.posizione = i;
        }
    }

    return oggettoMaggiore;
}

int* removef(int v[], int k){
    int i = 0;
    bool trovato = 0;
    int tmp;
    
    while(trovato = 0 && i < DIM){
        if(v[i] == k){
            for(int j = i; j < DIM; j++){
                v[j] = v[j + 1];
                
                if(j == DIM - 1){
                    v[j] = 0;
                }
            }
            trovato = 1;
        }
        
        i++;
    }
    
    return v;
}

string ordering(int v[]){
    int costante = 1;
    int cresc = 1;
    int decresc = 1;
    
    for(int i = 0; i < DIM - 1; i++){
        if(v[i] < v[i + 1]){
            cresc++;
        }
        else if(v[i] > v[i + 1]){
            decresc++;
        }
        else if(v[i] == v[i + 1]){
            costante++;
        }
        
        cout << cresc << " " << decresc << " " << costante << endl;
    }
    
    if(cresc == DIM){
        return "crescente";
    }
    else if(decresc == DIM){
        return  "decrescente";
    }
    else if(costante == DIM){
        return  "costante";
    }
    else{
        return "non ordinato";
    }
}

int* reverse(int v[]){
    int i = 0;
    int j = DIM - 1;
    int scambio;
    
    while(i < j){
        scambio = v[i];
        v[i] = v[j];
        v[j] = scambio;
        
        i++;
        j--;
    }
    
    return v;
}


int main(){
    int array[DIM] = {5, 4, 3, 2, 10};
    int contrario[DIM];
    
    int k = 75;
	
	//cout << "Numeri maggiori di k: " << greaterThan(array, k) << endl;
	//cout << "Valore k presente/ non presente:" << member(array, k) << endl;
	
	/*piuGrande tmp = largest(array);
	cout << "Valore dell'elemento maggiore: " << tmp.valore << " e relativo indice: " << tmp.posizione << endl;*/
	
	//cout << "ORDERING: " << ordering(array) << endl;
	
	// ================ inversione ==============
    /*int *tmp = reverse(array);
    for(int i = 0; i < DIM; i++){
        cout << tmp[i] << " ";
    }*/
    
    int *tmp = removef(array, 3);
    
    for(int i = 0; i < DIM; i++){
        cout << tmp[i] << " ";
    }
    return 0;
}

