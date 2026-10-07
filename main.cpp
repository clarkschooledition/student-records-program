#include <iostream>

// Using specific imports to avoid conflicts
using std::cout;
using std::endl;
using std::cin;

int main() {

    int choice;

    string firstName[],middleName[],lastName[];
    


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

    return 0;
}