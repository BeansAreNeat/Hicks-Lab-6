#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

int main()
{
    Queue q;
    string stu;     // student string
    char rep, cstu; // repeat & char student
    int size = 5;
    int option;
    bool repeat = false;

    cout << "Input student name: "; cin >> stu;
    q.insert(stu);

    cout << endl;
    // User selection
    cout << "Queue Options" << endl;
    cout << "1) Display queue" << endl
        << "2) Size of queue" << endl
        << "3) Front of queue" << endl
        << "4) Back of queue" << endl
        << "5) Delete a node" << endl;
    do {
        cout << "Select your option: ";
        cin >> option;
        // Queue functions, based on user input
        switch (option) {
        case 1:
            cout << "The queue q is : "; q.display(); break;
        case 2:
            //cout << "\q.size() : " << q.() << endl; break;
        case 3:
            //cout << "\q.front(): " << q.front() << endl; break;
        case 4:
            //cout << "\q.back() : " << q.back() << endl; break;
        case 5:
            cout << "\q.pop() : "; q.remove(); q.display(); break;
        default:
            cout << "Please use a valid input" << endl; break;
        }
        cout << endl;

        cout << "Do you want to repeat? (y/n): ";
        cin >> rep;
        if (rep == 'y' || rep == 'Y') {
            repeat = true;
        }
        else if (rep == 'n' || rep == 'N') {
            repeat = false;
        }

    } while (repeat == true);
    return 0;
}