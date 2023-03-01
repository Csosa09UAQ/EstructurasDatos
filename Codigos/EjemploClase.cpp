#ifndef PERSONA_H 
#define PERSONA_H
#include <string>
class Persona //Declaramos la clase con el nombre Persona
{
private:     //a partir de aquí todos los miembros serán privados
//los datos miembro pueden ser cualquier tipo de dato, incluso otras clases como string
  std::string nombre;
  int edad;
  float estatura;
  float peso;   
            //métodos privados
  float aumentaEstatura(float metros){return estatura += metros}; //función inline
  float aumentaPeso(float kilogramos){return peso += kilogramos};
  
public:      //a patir de aquí todas las declaraciones serán de acceso público
  Persona(const std::string& nombre,int edad, float peso, float estatura); // Constructor
  void saluda();
  int cumpleAnios();
};
#endif
