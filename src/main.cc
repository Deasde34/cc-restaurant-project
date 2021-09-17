#include<iostream>
#include "Menu.hh"
#include "Stack.hh"

int main()
{
  Menu* type1{new Menu("Plastico", "Vasos", 200)};
  Menu* type2{new Menu("Porcelana", "Platos", 140)};
  Menu* type3{new Menu("Metal", "Tenedores y cuchillos", 350)};
  Menu* type4{new Menu("Vidrio ", "Copas", 150)};

  Stack* stack{new Stack()};
  stack->Push(type1);
  stack->Push(type2);
  stack->Push(type3);
  stack->Push(type4);
  stack->Print();

  stack->Pop();
  stack->Pop();

  stack->Print();

  std::cin.get();

  delete stack;
  return 0;
}

