#pragma once
#include "Menu.hh"

class Node
{
private:
  Menu* menuNode{};
public:
  Node* next{};
  Node(Menu*& menuNode);
  ~Node();

  Menu* GetMenu() const;
};
