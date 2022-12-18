#include <iostream>

#include "../include/linked_list.hpp"

#include <utility>

using namespace std;

LinkedList::LinkedList(){
  head = nullptr;
}

LinkedList::~LinkedList(){
  while (this->head != nullptr) {
    delete exchange(head, head->next);
  }
}


void LinkedList::add(int item){
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


void LinkedList::removeOnceOccurrence(int num){
  if(head->data == num){
    delete exchange(head, head->next);
    printf("%d removed sucessfully!\n", num);
    _size -= 1;
  }
  else {
    Node* ancestor = head;
    Node* temp = head->next;

    while(temp->next != nullptr){
      if(temp->data == num){
        ancestor->next = temp->next;
        delete temp;
        printf("%d removed sucessfully!\n", num);
        _size -= 1;
        break;
      }
      ancestor = temp;
      temp = temp->next;
    }

    if(temp->data == num){
      ancestor->next = temp->next;
      delete temp;
      printf("%d removed sucessfully!\n", num);
      _size -= 1;
    }
  }
}

/*void LinkedList::removeAllOccurrences(int num){
  if(head->data == num){
    delete exchange(head, head->next);
    _size -= 1;
  }
  else {
    Node* ancestor = head;
    Node* temp = head->next;

    while(temp->next != nullptr){
      if(temp->data == num){
        ancestor->next = temp->next;
        delete temp;
        _size -= 1;
      }
      ancestor = temp;
      temp = temp->next;
    }

    if(temp->data == num){
      ancestor->next = temp->next;
      delete temp;
      _size -= 1;
    }
  }
}*/

void LinkedList::search(int num){
  Node* temp = head;
  int occurrences = 0;
  while(temp->next != nullptr){
    if(temp -> data == num) occurrences += 1;
    temp = temp->next;
  } 
  if(occurrences == 0) printf("%d is not in the list\n", num);
  else  printf("%d is in the list and it appears %d times\n", num, occurrences);
}

int LinkedList::size(){
  return _size;
}

ostream &operator<<(ostream &os, LinkedList &list) {
  Node* temp = list.head;
  cout << endl;
  if(list._size == 0) printf("The list has any element!\n");
  else {
    os << "Elements: ";
    while(temp != nullptr){
      os << temp->data << " ";
      temp = temp->next;
    }
    os << endl;
  }
  return os;
}