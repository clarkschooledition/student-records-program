#include <iostream>
#include <string>

// imports 
using std::cout;
using std::endl;
using std::cin;
using std::string;
//Prototype
void AddStudents();

struct Node
{
    int studentID;
    string firstName,middleInitials,surname;
    Node* next;

    Node(string FN, string MI, string SN, int ID)
        : firstName(FN), middleInitials(MI), surname(SN),
        studentID(ID), next(nullptr) {}
};

class LinkedList{
 private:   
 Node* head;
 public:
 LinkedList(){
    head = nullptr;
 };
 
 void AppendStudent(string FN, string MI, string SN,int ID){
    Node* newNode = new Node(FN,MI,SN,ID);
    
    if(head == nullptr){
    head = newNode;
    return;
 }

 Node* temp = head;
    while (head != nullptr) {
        Node* tmp = head;
        head = head->next;
        delete tmp;
    }

 temp->next = newNode;
 }
 void Display() const {
    if (head == nullptr) { cout << "No students yet.\n"; return; }
    int i = 1;
    for (Node* cur = head; cur != nullptr; cur = cur->next) {
        cout << i++ << "). " << cur->firstName << " "
             << cur->middleInitials << " " << cur->surname << "\n";
    }
}
};

//Global 
LinkedList StudentInfo;

int main() {

    int choice;


    do {

        cout << "========================================\n";
        cout << " STUDENT RECORD MANAGEMENT SYSTEM\n";
        cout << "========================================\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Sort Students\n";
        cout << "7. Stack Operations\n";
        cout << "8. Queue Operations\n";
        cout << "9. Student Statistics\n";
        cout << "10. Exit\n";
        cout << "========================================\n";
        cout << "Enter your choice: ";

        cin >> choice;

        cin.ignore();

        switch (choice) {
            case 1: {
                AddStudents();

                }
                break;
            case  2:
                StudentInfo.Display();
                break;
            case  3:
                cout << "Search Student:\n";
                break;
            case  4:
                cout << "Update Student:\n";
                break;
            case  5:
                cout << "Delete Student:\n";
                break;
            case 6:
                cout << "Sort Students:\n";
                break;
            case  7:
                cout << "Stack Operations:\n";
                break;
            case  8:
                cout << "Queue Operations:\n";
                break;
            case  9:
                cout << "Student Statistics:\n";
                break;
            case 10:
                cout << "Bye!\n";
                break;
            default:
                cout << "Choice are invalid please choose between 1-10\n";
                break;
        }
    } while (choice != 10);
    

    return 0;
}

void AddStudents(){
 string ans,FN, MI, SN;
 static int ID = 1; 
    do {
        cout << "< Add Student below >\n";

        cout << "First Name: ";
        getline(cin, FN);

        cout << "Middle Initials: ";
        getline(cin, MI);

        cout << "Surname: ";
        getline(cin, SN);

        StudentInfo.AppendStudent(FN,MI,SN,ID++);
        cout << "Do you want to add another student to the list (y/n): ";
         getline(cin, ans);          
} 
while (ans == "y" || ans == "Y");
}