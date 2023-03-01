#include <iostream>
int main(){
	
	//int myMatriz1[2][2] = {{1,2},{3,4}};

	//std::cout << myMatriz1[1][1];
	
	using namespace std;
	
	int edades[3][2] = {{1,2},{9,8},{14,21}};
    int filas = (sizeof(edades)/sizeof(edades[0]));
    int columnas = (sizeof(edades[0])/sizeof(edades[0][0]));
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout<<edades[i][j]<<endl;
        }
    }
	
}
