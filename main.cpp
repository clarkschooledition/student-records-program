#include <iostream>

// Using specific imports to avoid conflicts
using std::cout;
using std::endl;
using std::cin;

int main() {

    int choice;

    while (choice) {
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
        cout << "\n";

        switch (choice) {
            case  1:
                cout << "Add student:\n";
                break;
            case  2:
                cout << "Currently All Students List:\n";
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
                choice = false;
                cout << "Bye!\n";
                break;
            default:
                cout << "Choice are invalid please choose between 1-10\n";
                break;
        }
    }

    return 0;
}