#include <iostream>

#include "../include/linked_list.hpp"

using namespace std;

LinkedList::LinkedList(){
  head = nullptr;
}

/*LinkedList::~LinkedList(){
  clear();
}*/

void LinkedList::add(double item){
  if(head == nullptr) head = new Node(item);
  else {
    Node* node = new Node(item);
    Node* temp = head;

    while(temp->next != nullptr){
      temp = temp->next;
    }
    temp->next = node;
  }
  _size += 1;
}

void LinkedList::print(){
  Node* temp = head;
  if(_size == 0) cout << "The list has any element";
  else {
    cout << "Elements: ";
    while(temp != nullptr){
      cout << temp->data << " ";
      temp = temp->next;
    }
  }
  
}

int LinkedList::size(){
  return _size;
}