#include "Menu.hh"

Menu::Menu(std::string material, std::string crockery, int howMuch)
{
  this->material = material;
  this->crockery = crockery;
  this->howMuch = howMuch;
}

Menu::~Menu()
{
}

std::string Menu::GetMaterial() const
{
  return material;
}
std::string Menu::GetCrockery() const
{
  return crockery;
}
int Menu::GetHowMuch() const
{
  return howMuch;
}