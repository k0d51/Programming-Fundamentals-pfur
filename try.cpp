#include <iostream>
#include <string>
using namespace std;

struct Node {
    string Name;
    int age;
    double salary;
    Node* next;
    
    Node(string n, int a, double s) : Name(n), age(a), salary(s), next(nullptr) {}
};

int findIndex(Node* head, string name) {
    Node* curr = head;
    int ctr = 1;
    while (curr != nullptr) {
        if (curr->Name == name) {
            return ctr;
        }
        curr = curr->next;
        ctr++;
    }
    return -1; // Return -1 if the name is not found
};

int main() {
    Node* head = nullptr;       
    Node* ptr = nullptr;
    int choice, age;
    string name;
    double salary;

    do {
        cout << "\nLinked List Operations:\n";
        cout << "1. Create future node\n";
        cout << "2. Insert at start\n";
        cout << "3. Insert at end\n";
        cout << "4. Erase by name\n";
        cout << "5. Print list\n";
        cout << "6. Add before name\n";
        cout << "7. Add after name\n";
        cout << "0. Exit\n";
        cin >> choice;

        switch(choice) {
            case 1: { // create node
                if(ptr) {
                    delete ptr;
                    ptr = nullptr;
                }
                cout << "Enter name: ";
                cin >> name;
                cout << "Enter age: ";
                cin >> age;
                cout << "Enter salary: ";
                cin >> salary;
                ptr = new Node(name, age, salary);
                cout << "node created!\n";
                break;}

            case 2: { //insert start
                ptr->next = head;
                head = ptr;
                ptr = nullptr;
                cout << "inserted at start!\n";
                break;}

            case 3: { //insert end
                if(!head) {
                    head = ptr;
                } else {
                    Node* temp = head;
                    while(temp->next) {
                        temp = temp->next;
                    }
                    temp->next = ptr;
                }
                ptr = nullptr;
                cout << "inserted at end!\n";
                break; }

            case 4: { //erase
                string spes;
                cout << "Enter name by which to delete: ";
                cin >> spes;
                cout << "\n";
                int ind = findIndex(head, spes);
                if (ind == 1) {
                    Node* temp = head;
                    head = head->next;
                    delete temp;
                } else {
                    Node* current = head;
                    Node* prev = nullptr;
                    int count = 1;
                    while(current && count < ind) {
                        prev = current;
                        current = current->next;
                        count++; }
                    prev->next = current->next;
                    delete current;
                }
                cout << "\nElement deleted\n";
                break;
            }

            case 5: { //print
                if(!head) {
                    cout << "List is empty!\n";
                    break;
                }
                Node* current = head;
                cout << "Linked List: \n";
                while(current) {
                    cout <<"Name: " << current->Name << ". Age: "<< current->age <<". Salary: " << current->salary << "\n";
                    current = current->next;
                }
                break;}

            case 6: {
                // add before a specified element
                string spes;
                cout << "Enter name to add before it: ";
                cin >> spes;
                int ind = findIndex(head, spes);
                if (ind == 1) {
                    ptr->next = head;
                    head = ptr;
                    ptr = nullptr;
                } else {
                    Node* current = head;
                    Node* prev = nullptr;
                    int count = 1;
                    while(current && count < ind) {
                        prev = current;
                        current = current->next;
                        count++; }
                    prev->next = ptr;
                    ptr->next = current;
                    ptr = nullptr;
                }
                cout << "\nElement added\n";
                break;
            }

            case 7: {
                // Add after a specified element
                string spes;
                cout << "Enter name to add after it: ";
                cin >> spes;

                int ind = findIndex(head, spes);
                Node* current = head;
                int count = 1;
                while (current && count < ind) {
                    current = current->next;
                    count++;
                }

                if (current) {
                    ptr->next = current->next;
                    current->next = ptr;
                    ptr = nullptr;
                    cout << "\nElement added after " << spes << "\n";
                } else {
                    cout << "\nNode with name " << spes << " not found!\n";
                }
                break;
            }

            case 0: cout << "Exiting"; break;

            default:
                cout << "invalid choice!\n";
        }
    } while(choice != 0);

    return 0;
}