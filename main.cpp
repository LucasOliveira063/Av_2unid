#include <iostream>
#include <fstream>
#include <string>
#include "sculptor.hpp"

int main (void) {

  Sculptor poke(50, 50, 50);//geracao de matriz

  poke.setColor(0.0, 0.0, 0.0, 0.7); 
  poke.putBox(0, 50, 0, 1, 0, 50); //base
  
  
  //implementacao de esfera branca de cima 
  poke.setColor(0.9, 0.9, 0.9, 0.4);
  poke.putSphere(25, 25, 25, 8); // avaliar posição

  poke.cutSphere(25, 0, 25, 8); //cortar esfera

  //implementacao de esfera branca de baixo 
  poke.setColor(0.9, 0.9, 0.9, 0.4);
  poke.putSphere(25, 24, 25, 8); // avaliar posição

  poke.cutSphere(25, 0, 25, 8); //cortar esfera

  //implementacao do anel vermelho  
  poke.setColor(1.0, 0.0, 0.0, 1.0);
  poke.putSphere(25, 24, 25, 4); // avaliar posição

  poke.cutSphere(25, 0, 25, 8);
  poke.cutSphere(25, 0, 25, 8); //cortar esfera
 

  std::cout << "Arquivo poke criado: " << std::endl;
  
  poke.writeOFF("poke.off"); //geracao do arquivo
}