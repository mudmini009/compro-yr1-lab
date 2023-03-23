//? implement file
#include "Person.h"
#include <iostream>
using namespace std;

// ***************************-Person-***************************
Person::Person(){
    name = "";
    height = 0;
    age = 0;
}
Person::Person(string n, int h, int a){
    name = n;
    height = h;
    age = a;
}
Person::~Person(){
   //!deconstructor

}
void Person::showPersonInfo(){
    cout<<"Person name:"<<name<<endl;
    cout<<"height:"<<height<<endl;
    cout<<"age:"<<age<<endl;
}

// ***************************-Student-***************************

Student::Student():Person(){
    Person();
    id = 0;
    grade = 0;
}

Student::Student(string name, int height, int age, float i,int g):Person(name, height, age){
    id = i;
    grade = g;
}

Student::~Student(){
    //!deconstructor
    
}
void Student::showStudenInfo(){
    showPersonInfo();
    cout<<"id:"<<id<<endl;
    cout<<"grade:"<<grade<<endl;
}

// ***************************-Teacher-***************************

Teacher::Teacher():Person(){
    Person();
    subject = "";

}

Teacher::Teacher(string name, int height, int age, string subj):Person(name, height, age){
    subject = subj;
}

Teacher::~Teacher(){
    //!deconstructor

}

string Teacher::getSubject(){
    return subject;
}

void Teacher::setSubject(string subj){
    subject=subj;

}

void Teacher::showTeacherInfo(){
    showPersonInfo();
    cout<<"subject:"<<subject<<endl;

}



