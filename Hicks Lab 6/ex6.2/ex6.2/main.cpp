#include <iostream>
#include <queue>
using namespace std;

// Print the queue
template <class T>
void showQ(queue<T> qq)
{
    queue<T> q = qq;
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

// Driver Code
int main()
{
    queue<string> q;
    string stu;
    char ans;
    int size = 5;
    int option;
    bool repeat = false;

    for (int i = 0; i < size; i++)
    {
        cout << "Input student name: "; cin >> stu;
        q.push(stu);
    }
    cout << endl;
    // User selection
    cout << "Queue Options" << endl;
    cout << "1) Display queue"  << endl
         << "2) Size of queue"  << endl
         << "3) Front of queue" << endl
         << "4) Back of queue"  << endl
         << "5) Delete a node"  << endl;
    do {
        cout << "Select your option: ";
        cin >> option;
        // Queue functions, based on user input
        switch (option) {
        case 1:
            cout << "The queue q is : "; showQ(q); break;
        case 2:
            cout << "\q.size() : " << q.size() << endl; break;
        case 3:
            cout << "\q.front(): " << q.front() << endl; break;
        case 4:
            cout << "\q.back() : " << q.back() << endl; break;
        case 5:
            cout << "\q.pop() : "; q.pop(); showQ(q); break;
        default:
            cout << "Please use a valid input" << endl; break;
        }
        cout << endl;

        cout << "Do you want to repeat? (y/n): ";
        cin >> ans;
        if (ans == 'y' || ans == 'Y') {
            repeat = true;
        } else if (ans == 'n' || ans == 'N') {
            repeat = false;
        }

    } while (repeat == true);

    return 0;
}