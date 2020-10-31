#include <iostream>
#include "student.h"
//header for node class
class Node{
public:
  Node* getNext();
  void setNext(Node* node);
  Node(Student*);
  ~Node();

private:

};
