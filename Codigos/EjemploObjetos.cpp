#include "iostream"
#include "stdio.h"
#include "string"

using namespace std;

class rectangulo {
int base, altura;
public:
void dimensiones (int b, int h) { base=b; altura=h; }
int area(void) { return base * altura; }
};
main ()
{
rectangulo MiRectangulo; //Se declara el objeto
MiRectangulo.dimensiones(10, 5); //Se define el tamaño del objeto
cout << "Area= " << MiRectangulo.area(); //Se calcula el área del objeto
rectangulo * ap_TuRectangulo = new rectangulo; //Se declara apuntador al obj.
ap_TuRectangulo->dimensiones(10, 20); //Se define el tamaño del objeto
cout << "Area= " << ap_TuRectangulo->area(); //Se calcula el área del obj.
}
