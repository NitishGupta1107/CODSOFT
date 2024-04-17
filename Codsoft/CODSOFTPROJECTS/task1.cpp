#include <bits/stdc++.h>
using namespace std;

void addTask(vector<string> &list, string &taskName) // Function use to insert the list of task
{
    list.push_back(taskName); // Used to push the task in the list
    cout << "Task added!" << endl;
}
void viewTask(vector<string> &list)
{
    if (list.empty())
    {
        cout << "No task is added in your list! Please add any task. " << endl;
    }
    else
    {
        int counter = 1;
        for (auto it : list)
        {
            cout << counter << ".";
            cout << it << " " << endl;
            counter++;
        }
    }
}

void deleteTask(vector<string> &list, int i)

{
    list.erase(list.begin() + i - 1);
    cout << "Task " << i << " removed successfully!";
}
int main()
{
    vector<string> list;

    int choice;
    do
    {
        cout << "To do list Menu:" << endl;
        cout << " 1. Add task" << endl;
        cout << " 2. View tasks" << endl;
        cout << " 3. Delete tasks" << endl;
        cout << " 4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {

            string taskName;
            cout << "Enter the task you want to add in your list :";
            cin.ignore();
            getline(cin, taskName);
            addTask(list, taskName);
            break;
        }
        case 2:
            viewTask(list);
            break;

        case 3:
            int taskindex;
            cout << "Enter the task number you want to remove from your list :";
            cin >> taskindex;
            deleteTask(list, taskindex);

            break;
        case 4:
            cout << "Exiting the program!" << endl;
            break;
        default:
            cout << "Invalide choice! Please choose a valid option" << endl;
        }

    } while (choice != 4);
}