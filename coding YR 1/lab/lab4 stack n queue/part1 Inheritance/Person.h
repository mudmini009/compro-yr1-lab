//? header file
#ifndef PERSON_H
#define PERSON_H

#include<string>
using namespace std;

class Person{
    public:
        string name;
        int height;
        int age;
        Person();
        Person(string n, int h, int a);
        ~Person();
        void showPersonInfo();
};

class Student: public Person{
    public:
        float id;
        int grade;
        Student();
        Student(string name, int height, int age, float i,int g);
        ~Student();
        void showStudenInfo();
};

class Teacher: public Person{
    private:
        string subject;
    public:
        Teacher();
        Teacher(string name, int height, int age, string subj);
        ~Teacher();
        string getSubject();
        void setSubject(string subj);
        void showTeacherInfo();
};


        

#endif