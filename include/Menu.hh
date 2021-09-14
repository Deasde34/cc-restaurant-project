#pragma once

#include<string>

class Menu
{
private:
  std::string menu;
  std::string dish;
  float price;
public:
  Menu(std::string menu, std::string dish,  float price);
  ~Menu();
  std::string GetMenu() const;
  std::string GetDish() const;
  float GetPrice() const;
};
