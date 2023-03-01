#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	
	int num[] = {1,2,3,4,5};
	int *dir_num;
	
	dir_num = num;
	
	for(int i = 0; i<5;i++){
	
	cout<<"Numero: " << dir_num[i] << endl;
	cout<<"Apuntador " << &dir_num[i] << endl;
	
	}
	
	
	getch();
	return 0;
	
}