//?main file
#include "Person.cpp"
#include<iostream>
using namespace std;

int main(){

    Person mud("Mud",180,19);
    mud.showPersonInfo();
    Student Big("Big",190,19,62,10);
    Big.showStudenInfo();
    Teacher Blink("Blink",175,30,"programming");
    Blink.showTeacherInfo();
    Blink.setSubject("compro");
    Blink.age=31;
    Blink.showTeacherInfo();
    cout << "Subject: " << Blink.getSubject() << endl;


    return 0;
}