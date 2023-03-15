#include <iostream>
#include <conio.h>
#include <queue>

using namespace std;

int main(){
	
	queue<int> cola;
	
	cola.push(1);
	cola.push(2);
	cola.push(3);
	cola.push(5);
	cola.push(6);
	
	cout << cola.front() << "\n";
	
	cola.pop();
	
	cout << cola.front();
	 
}


