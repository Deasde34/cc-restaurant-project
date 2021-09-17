#include "Node.hh"

Node::Node(Menu *&menu)
{
  this->menuNode = menu;
}

Node::~Node()
{
}

Menu *Node::GetMenu() const
{
  return menuNode;
}