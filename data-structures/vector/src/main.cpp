#include <iostream>
#include <vector>

using namespace std;

class vectorController{

    private:
        vector<int> m_vector;

    public:
        vectorController() { cout << "Vector Controller Initialized\n"; }

        /** @fn void addNewElement(int value)
        *  @brief add new element to member vector
        *  @param value: new value
        */
        void addNewElement(int value){
            m_vector.push_back(value);
        }

        /** @fn void printElements
        *  @brief Print all elements of the member vector
        *  @return true when process finished successfully, otherwise false
        */
        int printElements(){
            if (vectorIsEmpty()) return false;
            for (int i = 0 ; i < m_vector.size() ; i++){
                cout << m_vector.at(i) << "\n";
            }
            return true;
        }

        /** @fn void deleteElement(int index)
        *  @brief delete value with index
        *  @param index: index
        *  @return true when process finished successfully, otherwise false
        */
        bool deleteElement(int index){
            if (vectorIsEmpty()) return false;
            m_vector.erase(m_vector.begin() + index);

            return true;
        }

        /** @fn void updateElement(int index, int value)
        *  @brief update member vector's value
        *  @param index: index
        *  @param value: new value
        *  @return true when process finished successfully, otherwise false
        */
        bool updateElement(int index, int value){
            if (vectorIsEmpty()) return false;
            m_vector[index] = value;
            return true;
        }

        /** @fn void deleteLastElement()
        *  @brief delete last element of the member vector
        *  @return true when process finished successfully, otherwise false
        */
        bool deleteLastElement(){
            if (vectorIsEmpty()) return false;
            m_vector.pop_back();
            return true;
        }

        /** @fn void vectorIsEmpty()
        *  @brief Check vector is empty or not
        *  @return true when is empty, otherwise return false
        */
        bool vectorIsEmpty(){
            if (m_vector.size() == 0) return true;
            return false;
        }


};

void newLine(){
    cout << "\n";
}


int main() {

    cout << "\nCreating new object from vectorController\n";
    vectorController myVectorController;
    newLine();

    cout << "Add new value to vector\n";
    myVectorController.addNewElement(1);
    newLine();

    cout << "Add new value to vector\n";
    myVectorController.addNewElement(2);
    newLine();

    cout << "Add new value to vector\n";
    myVectorController.addNewElement(3);
    newLine();

    cout << "Printing all elements of the vector\n";
    myVectorController.printElements();
    newLine();

    cout << "Update value of the vector's second index\n";
    myVectorController.updateElement(1, 100);
    newLine();

    cout << "Printing all elements of the vector\n";
    myVectorController.printElements();
    newLine();

    cout << "Delete second elements of the vector\n";
    myVectorController.deleteElement(0);
    newLine();

    cout << "Printing all elements of the vector\n";
    myVectorController.printElements();
    newLine();

    cout << "Delete last element of the vector\n";
    myVectorController.deleteLastElement();
    newLine();

    cout << "Printing all elements of the vector\n";
    myVectorController.printElements();
    newLine();

}
