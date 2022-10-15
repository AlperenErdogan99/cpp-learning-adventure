#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
        string m_name;
        int m_id;
        int m_gpa;

    public:

        void setInfo(string name, int id, int gpa){
            m_name = name;
            m_id = id;
            m_gpa = gpa;
        }

        void info(){
            cout << "Name: " << m_name << endl;
            cout << "Id: " << m_id << endl;
            cout << "Gpa: " << m_gpa << endl;
        }

        bool isSuccessfull(){
            if (m_gpa > 50){
                cout << m_name << " is successfull" << endl;
                return true;
            }
            cout << m_name << " is not successfull" << endl;
            return false;
        }
};


int main(){
    Student *student1 = new Student();
    student1->setInfo("Alperen", 123, 65);
    student1->info();
    student1->isSuccessfull();


    Student *student2 = new Student();
    student2->setInfo("James", 444, 23);
    student2->info();
    student2->isSuccessfull();

    delete student1, student2;
}
