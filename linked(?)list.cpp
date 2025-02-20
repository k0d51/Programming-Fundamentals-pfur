#include <iostream>
#include <vector>
#include <string>

using namespace std;

    struct Node {
        string Name;
        int age;
        double score;
        
        Node* next;
    };
    

int main() {
    
    vector<Node> list;
    Node A;
    
    // administration
    bool adm = true;
    while (adm) {
	    cout << "To change info type 1";
    	cout << "\nTo add to the top type 2";
	    cout << "\nTo add to the end type 3";
	    cout << "\nTo delete type 4";
	    cout << "\nTo print type 5";
	    cout << "\nTo exit type 0";
        int S;
        cin >> S;
        switch (S) {
            case 1:
            {
                cout << "Name: \n"; cin >> A.Name;
                cout << "Age: \n"; cin >> A.age;
                cout << "Score: \n"; cin >> A.score;
                break;
            }
            case 2:
            {
                list.insert(list.begin(), A);
                break;
            }
            case 3:
            {
                list.push_back(A);
                break;
            }
            case 4:
            {
                cout << "Specify element starting from 1";
                int n;
                cin >> n;
                list.erase(list.begin() + n);
            }
            case 5:
            {
                for (const auto& A: list) {
                    cout << "\n" << "\nName: \n" << A.Name;
                    cout << "\nAge: \n" << A.age;
                    cout << "\nScore: \n" << A.score << "\n";
                }
                break;
            }
            case 0: 
            {
                adm = false;
                break;
            }
        }
    }
	
	
    return 0;
}
