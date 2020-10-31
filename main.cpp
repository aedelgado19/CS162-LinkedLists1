/* Author: Allison Delgado
 * Last updated: October 30, 2020
 * Linked Lists uses the same principles of StudentList but
 * as the name suggests, uses linked lists.
 */

#include <iostream>
#include "node.h"
using namespace std;

//function prototypes
void addStudent();
void print();
Node* head = NULL; //beginning of list

int main(){
  char input[10]; //holds either add or print currently
  cout << "Welcome to (Linked) StudentList. " << endl;
  cout << "To add a student, type 'ADD'." << endl;
  cout << "To print out list, type 'PRINT'." << endl;
  cout << "To quit, type 'QUIT'." << endl;
  cout << " > " << endl;
  cin.get(input, 10);
  cin.get();
  while(strcmp(input, "QUIT") != 0){
    if(strcmp(input, "ADD") == 0){
      addStudent();
    }
    else if(strcmp(input, "PRINT") == 0){
      print();
    }
  }
}
void addStudent(){
  char fName[50];
  char lName[50];
  int id = 0;
  float gpa = 0.00;
  Student* student = new Student();
  
  cout << "Enter the first name of student. " << endl;
  cout << " > "; //prompt input
  cin.get(fName, 50);
  cin.get();
  student->setFirstName(fName);
  cout << "Enter the last name of student. " << endl;
  cout << " > "; //prompt input
  cin.get(lName, 50);
  cin.get();
  student->setLastName(lName);
  cout << "Enter the student ID of the student. " << endl;
  cout << " > "; //prompt input
  cin >> id;
  cin.get();
  student->setID(id);
  cout << "Enter the GPA of the student. " << endl;
  cout << " > "; //prompt input
  cin >> gpa;
  cin.get();
  student->setGPA(gpa);
}

void print(Node* next){
  if(next == head){
    cout << "list: " << endl;
  }
  if(next != NULL){
    cout << next->getFirstName() << " " << next->getLastName();
  }
  
}
