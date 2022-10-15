#include <iostream>
#include <string>

using namespace std;

class Car{
    private:
        string m_modelName;
        int m_years;
        bool m_crashed;

    public:
        string modelName();
        void setModelName(string modelName);

        int years();
        void setYears(int years);

        bool crashed();
        void setCrashed(bool crashed);

};



string Car::modelName(){
    return m_modelName;
}

void Car::setModelName(string modelName){
    m_modelName = modelName;
}


int Car::years(){
    return m_years;
}

void Car::setYears(int years){
    m_years = years;
}

bool Car::crashed(){
    return m_crashed;
}

void Car::setCrashed(bool crashed){
    m_crashed = crashed;
}


int main(){
    Car *car1 = new Car();

    car1->setModelName("Toyota Corolla");
    car1->setYears(2005);
    car1->setCrashed(false);

    cout << "Model Name: " << car1->modelName() << endl;
    cout << "Years: " << car1->years() << endl;
    cout << "Crashed or not: " << car1->crashed() << endl;

    return 0;
}
