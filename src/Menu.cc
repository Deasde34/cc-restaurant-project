#include<iostream>
#include "Stack.hh"
#include "Menu.hh"

Stack::Stack()
{
}

Stack::~Stack()
{
}

void Stack::Pop()
{
  if(IsEmpty())
  {
    std::cout << "Crockery list is empty" << std::endl;
  }
  else
  {
    Node* current{head};
    head = head->next;
    delete current;
  }
}

bool Stack::IsEmpty() const
{
  return head == nullptr;
}

void Stack::Push(Menu*& menu)
{
  if(IsEmpty())
  {
    head = new Node(menu);
  }
  else
  {
    Node* back{head};
    head = new Node(menu);
    head->next = back;
  }
}

void Stack::Print()
{
  if(IsEmpty())
  {
    std::cout << "Stack is empty" << std::endl;
  }
  else
  {
    Node* current{head};

    std::cout << "Crockery List:"<< std::endl;
    std::cout << std::endl;
    while (current)
    {
      std::cout << "Crockery Type: " << current->GetMenu()->GetMaterial() << std::endl;
      std::cout << "Crockery: " << current->GetMenu()->GetCrockery() << std::endl;
      std::cout << "Crockery Amount: " << current->GetMenu()->GetHowMuch() << std::endl;
      std::cout << std::endl;
      current = current->next;
    }
  }
}



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
