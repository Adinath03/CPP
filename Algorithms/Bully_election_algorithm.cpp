#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Pro
{
	int id;
	bool act;
	Pro(int id)
	{
		this->id = id;
		act = true;
	}
};

class Bully
{
public:
	int TotalProcess;
	vector<Pro> process;
	Bully() {}
	void initialiseBully()
	{
		cout << "Enter No of Systems: " << endl;
		cin >> TotalProcess;
		process.reserve(TotalProcess);
		for (int i = 1; i < process.capacity() + 1; i++)
		{
			process.emplace_back(i);
		}
	}
	void Election()
	{
		cout << "System no " << process[FetchMaximum()].id << " fails" << endl;
		process[FetchMaximum()].act = false;
		int initializedProcess;
		cout << "Who will initialize Election: ";
		cin >> initializedProcess;
		cout << "System " << initializedProcess << " intialize the election process......" << endl;

		int old = initializedProcess;
		int newer = old + 1;

		while (true)
		{
			if (process[newer].act)
			{
				cout << " Election Initiated by : " << process[old].id << endl;
				cout << "System " << process[old].id << " pass Election(" << process[old].id << ") to " << process[newer].id << endl;
				cout << endl;
				old = newer;
			}

			newer = (newer + 1) % TotalProcess;
			if (newer == initializedProcess || newer < old)
			{
				break;
			}
		}

		cout << "System " << process[FetchMaximum()].id << " becomes new Co-Ordinator" << endl;
		int coord = process[FetchMaximum()].id;

		old = coord;
		newer = (old + 1) % TotalProcess;

		while (true)
		{

			if (process[newer].act)
			{
				cout << "Process " << process[old].id << " pass Coordinator(" << coord << ") message to process " << process[newer].id << std::endl;
				old = newer;
			}
			newer = (newer + 1) % TotalProcess;
			if (newer == coord)
			{
				cout << "End Of Election " << std::endl;
				break;
			}
		}
	}
	int FetchMaximum()
	{
		int Ind = 0;
		int maxId = -9999;
		for (int i = 0; i < process.size(); i++)
		{
			if (process[i].act && process[i].id > maxId)
			{
				maxId = process[i].id;
				Ind = i;
			}
		}
		return Ind;
	}
	void menu()
	{
	}
};

int main()
{
	Bully object;
	object.initialiseBully();
	bool exit = true;
	while (exit)
	{
		cout << "************MENU*************" << endl;
		int choice;
		cout << "1. Current Co-ordinator " << endl;
		cout << "2. Bully Election " << endl;
		cout << "3. Exit " << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			cout << "System no " << object.FetchMaximum() + 1 << endl;
			break;
		}

		case 2:
		{
			object.Election();
			break;
		}
		case 3:
		{
			exit = false;
			break;
		}
		default:
		{
			cout << "Wrong Input" << endl;
		}
		}
	}

	return 0;
}
