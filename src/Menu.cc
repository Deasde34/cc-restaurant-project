#include<iostream>
#include "Stack.hh"

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
    std::cout << "Menu is empty" << std::endl;
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

    std::cout << "Game list:"<< std::endl;
    std::cout << std::endl;
    while (current)
    {
      std::cout << "Menu Name: " << current->GetMenu()->GetMenu() << std::endl;
      std::cout << "Menu Dish: " << current->GetMenu()->GetDish() << std::endl;
      std::cout << "Dish Price: " << current->GetMenu()->GetPrice() << std::endl;
      std::cout << std::endl;
      current = current->next;
    }
  }
}
