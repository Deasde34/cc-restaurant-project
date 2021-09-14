#include<iostream>
#include "Menu.hh"
#include "Stack.hh"

int main()
{
  Menu* menu1{new Menu("Steak", "Venison Steak", 340.04)};
  Menu* menu2{new Menu("Hamburger", "Hot Steamy Western Bacon", 149.99)};
  Menu* menu3{new Menu("Chicken", "Teriyaki Style Chicken", 121.99)};
  Menu* menu4{new Menu("Deluxe ", "Tomahawk Covered in 20k Karat Edible Gold", 12399.99)};

  Stack* stack{new Stack()};
  stack->Push(menu1);
  stack->Push(menu2);
  stack->Push(menu3);
  stack->Push(menu4);
  stack->Print();

  stack->Pop();
  stack->Pop();

  stack->Print();

  std::cin.get();

  delete stack;
  return 0;
}

