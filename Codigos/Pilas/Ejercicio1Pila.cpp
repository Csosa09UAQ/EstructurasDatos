#include <iostream>
#include <conio.h>
#include <stack>
using namespace std;

int main(){
	
	stack<int> pila;
	pila.push(1);
	pila.push(2);
	pila.push(3);
	pila.push(88);
	
	cout << pila.size() << endl;
	cout << pila.top() << endl;
	
	pila.pop();
	
	cout<< pila.top()<< endl;

	
}