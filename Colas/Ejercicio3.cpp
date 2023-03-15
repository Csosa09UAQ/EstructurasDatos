#include <iostream>
#include <conio.h>
#include <queue>
#include <unordered_set>

using namespace std;


queue<int> cola;

void removeDuplicates(queue<int>q){
	
	unordered_set<int> elementos;
    queue<int> colaSinDuplicados;
    while (!cola.empty()) {
        int elemento = cola.front();
        cola.pop();
        if (elementos.find(elemento) == elementos.end()) {
            elementos.insert(elemento);
            colaSinDuplicados.push(elemento);
        }
    }
    cola = colaSinDuplicados;
	
	
}


int main(){

	cola.push(1);
	cola.push(2);
	cola.push(3);
	cola.push(6);
	cola.push(6);
		
	removeDuplicates(cola);
    while (!cola.empty()) {
        cout << cola.front() << " "; 
        cola.pop();
    }
    cout << endl;

	
	return 0;

}