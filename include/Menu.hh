#pragma once

#include<string>

class Menu
{
private:
  std::string material;
  std::string crockery;
  int howMuch;
public:
  Menu(std::string material, std::string crockery,  int howMuch);
  ~Menu();
  std::string GetType() const;
  std::string GetCrockery() const;
  int GetHowMuch() const;
};
