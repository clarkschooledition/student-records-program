#include <iostream>
#include <regex>
#include <vector>
// Using specific imports to avoid conflicts
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;
using std::size;

int main() {

    int choice;
    vector<string> firstName, middleInitial, surname;

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
        // ingores the leftover \n so that the getline below can continue
        cin.ignore();

        switch (choice) {
            case 1: {
                string ans;
                do {
                    cout << "< Add Student below >\n";
                    string FN, MI, SN;

                    cout << "First Name: ";
                    getline(cin, FN);

                    cout << "Middle Initials: ";
                    getline(cin, MI);

                    cout << "Surname: ";
                    getline(cin, SN);

                    firstName.push_back(FN);
                    middleInitial.push_back(MI);
                    surname.push_back(SN);

                    cout << "Do you want to add another student to the list (y/n): ";
                    getline(cin, ans);

                    } while (ans == "y" || ans == "Y");
                }
                break;
            case  2:
                cout << "Currently all students list:\n";

                for (size_t i = 0; i < surname.size(); i++) {
                    cout << (i + 1) << "). " << firstName.at(i) << " " << middleInitial.at(i) << " " << surname.at(i) << "\n";
                };

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