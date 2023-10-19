// Microservicio 1 

#include <iostream>
#include <string>

using namespace std;

string processData() {
  // Lógica de negocio
  return "Hola Mundo"; 
}

int main() {
  string data = processData();
  
  // Llamada a API para enviar datos al microservicio 2
  callAPI(data);
  
  return 0;
}



