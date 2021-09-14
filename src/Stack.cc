#include "Menu.hh"

Menu::Menu(std::string menu, std::string dish, float price)
{
  this->menu = menu;
  this->dish = dish;
  this->price = price;
}

Menu::~Menu(){
}

std::string Menu::GetMenu() const
{
  return menu;
}
std::string Menu::GetDish() const
{
  return dish;
}
float Menu::GetPrice() const
{
  return price;
}