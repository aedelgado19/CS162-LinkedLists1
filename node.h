#include <iostream>
#include "student.h"
//header for node class
class Node{
public:
  Node* getNext();
  void setNext(Node* node);
  Node(Student*);
  ~Node();
  void setStudent(Student *inputStudent);
  Student* getStudent();
private:
  Student *studentPtr;
  Node* next;
};
