#include <iostream>
#include <conio.h>
#include <queue>
#include <stack>

using namespace std;


queue<int> cola;

int n;

void reverseQueue(queue<int>&q){
	
	stack<int> pila;
	n = q.size();
	for(int i = 0; i<n; i++){
		
		pila.push(q.front());
		q.pop();	
	}
	
	
	for(int i = 0; i<n; i++){
		
		q.push(pila.top());
		pila.pop();
		
	}
	
}

void ImprimirQueue(queue<int>q){
	
		for(int i = 0; i<n; i++){
		
		cout << q.front() << "\n";
		q.pop();
		
	}
	
}

int main(){

cola.push(1);
cola.push(2);
cola.push(3);
cola.push(5);
cola.push(6);
		
reverseQueue(cola);
ImprimirQueue(cola);
	
	return 0;
}