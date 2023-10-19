// Microservicio 2
#include <iostream>

using namespace std;

void handleData(string data) {
  // Recibe datos del microservicio 1
  cout << "Recibí: " << data << endl; 
}

int main() {
  // Escucha llamadas API
  listenForAPI();
  
  return 0;
}