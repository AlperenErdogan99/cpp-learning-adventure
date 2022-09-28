#include <string.h>
#include <iostream>
using namespace std;

struct node{
    string name;
    string surname;
    int phoneNumber;
    node* next;
};


class linkedList{

    private:
        // contains first node address and last node address
        node *head, *tail;

    public:
        // set NULL head and tail cause of we dont have any data when initialized the class
        linkedList(){
            head = NULL;
            tail = NULL;
        }

        void addNode(string name, string surname, int phoneNumber){
            // create temporary node for new datas add to current node
            node *tmp = new node;
            tmp -> name = name;
            tmp -> surname = surname;
            tmp -> phoneNumber = phoneNumber;
            tmp -> next = NULL;

            // if we adding first node to our linkedList, set new node to tail and head
            if (head == NULL){
                head = tmp;
                tail = tmp;

            // otherwise, connect new node to tail and set tail -> next
            } else {
                tail -> next = tmp;
                tail = tail -> next;
            }

        }

        void printHeadElements(){
            cout << "Name: " << head -> name << "\n";
            cout << "Surname: " << head -> surname << "\n";
            cout << "Phone Number: " << head -> phoneNumber << "\n";
        }

        void printTailElements(){
            cout << "Name: " << tail -> name << "\n";
            cout << "Surname: " << tail -> surname << "\n";
            cout << "Phone Number: " << tail -> phoneNumber << "\n";
        }

        // check name exist or not exist in linkedList
        int checkName(string name){
             int tIndex = 0;
             node* tTmp = head;
             while(tTmp != NULL){
                 if (tTmp -> name == name) { cout << name << " founded!\n" ; return tIndex; }
                 tTmp = tTmp -> next;
                 tIndex++;
             }
             cout << name << " could not find\n";
             return -1;
        }


};




int main(){

    linkedList myLinkedList;

    cout << "Add two new nodes to linked list\n";
    myLinkedList.addNode("Alperen", "Erdogan", 1234);
    myLinkedList.addNode("John", "Spring", 6789);
    cout << "************************* --- *************************\n";

    cout << "Print first element's datas of the Linked List\n";
    myLinkedList.printHeadElements();
    cout << "************************* --- *************************\n";

    cout << "Print last element's datas of the linked List\n";
    myLinkedList.printTailElements();
    cout << "************************* --- *************************\n";

    cout << "Searching Alperen name into LinkedList\n";
    myLinkedList.checkName("Alperen");
    cout << "************************* --- *************************\n";

    return 0;




}
