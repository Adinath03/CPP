#include <iostream>
#include <vector>

using namespace std;

vector<int> Load_balance(int s, int p)
{
    vector<int> balancedList(s);

    // Divide the number of processes evenly among the Servers
    int processesPerServer = p / s;
    int remainingProcesses = p % s;

    // Distribute the remaining processes to the first few Servers
    for (int i = 0; i < s; i++)
    {
        balancedList[i] = processesPerServer;
        if (remainingProcesses > 0)
        {
            balancedList[i]++;
            remainingProcesses--;
        }
    }
    return balancedList;
}

int main()
{
    int s, p;
    cout << "Enter the number of Server: ";
    cin >> s;
    cout << "Enter the number of processes: ";
    cin >> p;

    vector<int> balancedList = Load_balance(s, p);

    int choice;
    int temp;
    do
    {
        cout << endl
             << "MENU" << endl;
        cout << "1. View load Balancer" << endl;
        cout << "2. Add a new Server" << endl;
        cout << "3. Remove a Server" << endl;
        cout << "4. Add a new process" << endl;
        cout << "5. Remove a process" << endl;
        cout << "6. QUIT" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            balancedList = Load_balance(s, p);
            cout << endl
                 << "Balanced List: ";
            for (int i = 0; i < balancedList.size(); i++)
            {
                cout << balancedList[i] << " ";
            }
            break;
        case 2:
            cout << "Enter number of servers to add: " << endl;
            cin >> temp;
            s += temp;
            balancedList = Load_balance(s, p);
            break;
        case 3:
            cout << "Enter number of Servers to remove: " << endl;
            cin >> temp;
            s -= temp;
            if (s > 0)
            {
                balancedList = Load_balance(s, p);
            }
            else
            {
                cout << "Cannot remove a Servers. The number of servers cannot be less than zero" << endl;
            }
            break;
        case 4:
            cout << "Enter number of processes to add: " << endl;
            cin >> temp;
            p += temp;
            balancedList = Load_balance(s, p);
            break;
        case 5:
            cout << "Enter number of processes to remove: " << endl;
            cin >> temp;
            p -= temp;
            if (p > 0)
            {
                balancedList = Load_balance(s, p);
            }
            else
            {
                cout << "Cannot remove a processs. The number of processes cannot be less than zero." << endl;
            }
            break;
        case 6:
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 6);

    cout << endl
         << "Balanced List: ";
    for (int i = 0; i < balancedList.size(); i++)
    {
        cout << balancedList[i] << " ";
    }
    cout << endl;

    return 0;
}
