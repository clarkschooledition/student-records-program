#include <iostream>
#include <string>

// imports
using std::cin;
using std::cout;
using std::endl;
using std::string;
// Prototype
void AddStudents();
void SearchStudent();

/*
TODO: note

make sure to fix the feature for no.1 and no.2 and add validation
make sure we are final about our variables that we will use like below so we dont have to overwrite again and again

    float gradePointAverage;
    string firstName, middleInitials, surname, studentID, courseName;
*/

struct Node
{
    float gradePointAverage;
    string firstName, middleInitials, surname, studentID, courseName;
    Node *next;

    Node(string FN, string MI, string SN, string ID, float GPA, string course)
        : firstName(FN), middleInitials(MI), surname(SN),
        studentID(ID), gradePointAverage(GPA), courseName(course), next(nullptr) {}
};

class LinkedList {
private:
    Node *head;

public:
    LinkedList()
    {
        head = nullptr;
    };

    void AppendStudent(string FN, string MI, string SN, string ID, float GPA, string course)
    {
        Node *newNode = new Node(FN, MI, SN, ID, GPA, course);

        if (head == nullptr) {
            head = newNode;
            return;
        }

        // Traverse until the LAST node in the list
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }
    void DisplayStudent() const
    {
        if (head == nullptr)
        {
            cout << "No students yet.\n";
            return;
        }
        int i = 1;
        for (Node *cur = head; cur != nullptr; cur = cur->next)
        {
            cout << "=====================\n";
            cout << "Student No." << i++ << "\n";
            cout << "ID: " << cur->studentID << "\n";
            cout << "Name: " << cur->firstName << "\n"; 
            cout << "Course: " << cur->courseName << "\n";
            cout << "GPA: " << cur->gradePointAverage << "\n";
            cout << "=====================\n\n";


        }
    }

    void LinearSearchStudent() {

    }
    void BinarySearchStudent() {

    }
};

// Global
LinkedList StudentInfo;

int main()
{

    int choice;

    do
    {

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

        switch (choice)
        {
        case 1:
        {
            AddStudents();
        }
        break;
        case 2:
            StudentInfo.DisplayStudent();
            break;
        case 3:
            SearchStudent();
            break;
        case 4:
            cout << "Update Student:\n";
            break;
        case 5:
            cout << "Delete Student:\n";
            break;
        case 6:
            cout << "Sort Students:\n";
            break;
        case 7:
            cout << "Stack Operations:\n";
            break;
        case 8:
            cout << "Queue Operations:\n";
            break;
        case 9:
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

void AddStudents()
{
    string ans, FN, MI, SN, ID, course;
    float GPA;
    do
    {
        cout << "< Add Student below >\n";

        cout << "ID: ";
        getline(cin, ID);

        cout << "First Name: ";
        getline(cin, FN);

        cout << "Middle Initials: ";
        getline(cin, MI);

        cout << "Surname: ";
        getline(cin, SN);

        cout << "Course: ";
        getline(cin, course);

        cout << "GPA: ";
        cin >> GPA;

        cin.ignore();

        StudentInfo.AppendStudent(FN, MI, SN, ID, GPA, course);
        cout << "Do you want to add another student to the list (y/n): ";
        getline(cin, ans);
    } while (ans == "y" || ans == "Y");
}

void SearchStudent()
{
    int searchChoice;

    do {

    cout << "========================================\n";
    cout << "Search Student\n";
    cout << "========================================\n";
    cout << "1. Linear Search (by Student ID)\n";
    cout << "2. Binary Search (by Student ID)\n";
    cout << "3. Return to Main Menu\n";
    cout << "========================================\n";
    cin >> searchChoice;

    switch (searchChoice)
    {
    case 1:
        StudentInfo.LinearSearchStudent();
        break;
    case 2:
        StudentInfo.BinarySearchStudent();
        break;
    default:
        cout << "Choice are invalid please choose between 1-3\n";
        break;
    }

    } while (searchChoice != 3);
}