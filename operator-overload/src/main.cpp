#include <iostream>
#include <string>

using namespace std;

class Example{
    private:
        string m_name;
        string m_surname;

    public:
        void setName(string name);
        void setSurname(string surname);
        string name();
        string surname();


    Example operator=(const Example& example){
        m_name = example.m_name;
        m_surname = example.m_surname;
        return *this;
    }

    Example operator+=(const Example& example){
        m_name = example.m_name + m_name;
        m_surname = example.m_surname + m_surname;
        return *this;
    }


};


void Example::setName(string name){
    this->m_name = name;
}

void Example::setSurname(string surname){
    this->m_surname = surname;
}

string Example::name(){
    return m_name;
}

string Example::surname(){
    return m_surname;
}

int main(){

    Example ex1, ex2, ex3;

    ex1.setName("Alperen");
    ex1.setSurname("Erdogan");

    cout << "ex1 name: " << ex1.name() << endl;
    cout << "ex1 surname: " << ex1.surname() << endl;

    // call overloaded assigment
    ex2 = ex1;

    cout << "ex2 name: " << ex2.name() << endl;
    cout << "ex2 surname: " << ex2.surname() << endl;

    ex3 += ex1;
    ex3 += ex2;

    // call overloaded assigment
    cout << "ex3 name: " << ex3.name() << endl;
    cout << "ex3 surname: " << ex3.surname() << endl;

    return 0;
}

