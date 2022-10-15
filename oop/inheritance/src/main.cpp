#include <iostream>
#include <string>

using namespace std;

class People{

    private:
        string m_name;
        string m_surname;
        int m_height;

    public:
        void setName(string name) { m_name = name; }
        string name() {return m_name;}
        void setSurname(string surname) {m_surname = surname;}
        string surname() {return m_surname;}
        void setHeight(int height) {m_height = height;}
        int height() {return m_height;}

};

class Student : public People{
    private:
        string m_className;
        int m_gpa;

    public:
        void setClassName(string className){ m_className = className; }
        string className() { return m_className; }

        void setGpa(int gpa) { m_gpa = gpa; }
        int gpa() { return m_gpa; }

};



int main(){
    Student *student1 = new Student();

    student1->setName("Alperen");
    student1->setSurname("Erdogan");
    student1->setHeight(180);
    student1->setClassName("A2");
    student1->setGpa(84);

    cout << "Name: " << student1->name() << endl;
    cout << "Surname: " << student1->surname() << endl;
    cout << "Height: " << student1->height() << endl;
    cout << "Class Name: " << student1->className() << endl;
    cout << "Gpa: " << student1->gpa() << endl;

    return 0;
}
