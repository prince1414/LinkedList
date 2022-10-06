//linked list
#include <iostream>
#include <fstream>
using namespace std;

class LinkedList
{
  public:
  int data;
  LinkedList* next;
  
  LinkedList()
  {
    next = nullptr;
  }
  LinkedList(int da)
  {
    data = da;
    next = nullptr;
  }

  void append(int da)
  {
    LinkedList* temp = this; 
    while(temp->next!= nullptr)
    {
      temp = temp->next;
    }

    temp->next = new LinkedList(da);
  }

  void append(int da, int index)
  {
    LinkedList* temp = this;
    for(int i = 0 ; i < index ; ++i)
      temp = temp->next;
    LinkedList* mem = temp->next;
    temp->next = new LinkedList(da);
    temp->next->next = mem;
  }

  void display()
  {
    LinkedList* temp = this;

    while(temp->next!=nullptr)
    {
      temp = temp->next;
      cout << temp->data << endl;
    } 
  }

  int at(int index)
  {
    LinkedList* temp = this;
    for(int i = 0 ; i <= index ; ++i)
      temp = temp->next;
    return temp->data;
  }

  void pop()
  {
    LinkedList* temp = this; 
    while(temp->next->next!= nullptr)
    {
      temp = temp->next;
    }
    temp->next = nullptr;
  }
  void pop(int index)
  {
    LinkedList* temp = this;
    for(int i = 0 ; i < index ; ++i)
      temp = temp->next;
    temp->next = temp->next->next;
  }

};

int main() 
{

  
  LinkedList *ob = new LinkedList();

  int n;
  
  return 0;
}