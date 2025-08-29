#include<iostream>
#include "libro.h"

void book_test(){
  auto b1 = Book("Cien años de Soledad", "Gabriel Garcia Marquez", 1970);
  b1.showInfo();
}


int main () {
  book_test();
}
