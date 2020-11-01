/* Author: Allison Delgado
 * Last updated: October 30, 2020
 * Linked Lists uses the same principles of StudentList but
 * as the name suggests, uses linked lists.
 */

#include <iostream>
#include "node.h"
#include <cstring>
using namespace std;

//function prototypes
void addStudent(Node* head);
void print();


//add a new student to linked list
void addStudent(Node* head){
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

  //add into node
  Node* current = head;

  //first pass thru, no nodes yet
  if(current == NULL){
    head = new Node(student);
    head->setStudent(student);
    //head->setNext(next);
  }
  else {
    //while you have not hit end of list yet..
    while(current->getNext() != NULL){
      current = current->getNext(); //traverse through by setting current to next
    }
    current->setNext(new Node(student));
    current->getNext()->setStudent(student);
  }
}

//print out list
void print(Node* next){
  if(next == head){
    cout << "list: " << endl;
  }
  if(next != NULL){
    //cout << next->getFirstName() << " " << next->getLastName();
  }
}


int main(){

  Node* head = NULL; //beginning of list
  char input[10]; //holds either add or print currently
  cout << "Welcome to (Linked) StudentList. " << endl;
  cout << "To add a student, type 'ADD'." << endl;
  cout << "To print out list, type 'PRINT'." << endl;
  cout << "To quit, type 'QUIT'." << endl;

  //while they havent quit..
  while(strcmp(input, "QUIT") != 0){
    cout << "Enter a command (ADD/PRINT/QUIT)" << endl;
    cout << " > "; //prompt user again
    cin.get(input, 10);
    cin.get();

    //make to uppercase
    for(int i = 0; i < strlen(input); i++){
      input[i] = toupper(input[i]);
    }

    //call respective functions
    if(strcmp(input, "ADD") == 0){
      addStudent(head);
    }
    else if(strcmp(input, "PRINT") == 0){
      print(head);
    }
  }
  cout << "Now quitting. Goodbye! " << endl;
}

