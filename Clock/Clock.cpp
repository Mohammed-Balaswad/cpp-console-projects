#include<iostream>
#include <windows.h>
using namespace std;


int main()
{
	int start;
	int hr = 0, min = 0, sec = 0, alarm;
	int hr_a, min_a, sec_a;
	string ans, PM_AM, PM_AM_a;

	cout << "\t\t\t\t\t\t Clock Program \n";
	cout << "\t\t\t\t\t\t -------------\n";
	cout << "\t\t\t\t\t\t     0:0:0\n";
	cout << "\t\t\t\t\t\t    -------\n";
	cout << " Let's Run The Clock...\n";
	cout << " -------------------------\n";
	cout << "The Program Is Being Prepared";
	Sleep(1000); // milliseconds
	cout << ".";
	Sleep(1000); // milliseconds
	cout << ".";
	Sleep(1000); // milliseconds
	cout << ".";
	Sleep(500); // milliseconds
	system(("cls"));
a:
	cout << "\t\t\t\t\t  Set The Time 0:0:0\n";
	cout << "\t\t\t\t\t  ------------------\n";
	cout << "Hr : ";
	cin >> hr;
	cout << "Min : ";
	cin >> min;
	cout << "Sec : ";
	cin >> sec;
	//cin>>hr>>min>>sec;
	cout << "\t\t\t\t\t    AM / PM ? \n";
	cout << "\t\t\t\t\t    --------\n";
	cin >> PM_AM;


	if (hr > 12 || min > 61 || sec > 61)
	{
		system(("cls"));
		cout << "\t\t\t\t\t  Incorect Timing!\n";
		cout << "\t\t\t\t\t  ---------------\n";
		cout << "\t\t\t\t\t  Try Again...\n";
		cout << "\t\t\t\t\t  ------------\n";
		goto a;
	}
	else
	{
		system(("cls"));
		cout << "\t\t\t\t\t      The Timing Is Set Up.\n";
		cout << "\t\t\t\t\t---------------------------------\n";
	}

b:
	cout << "\t\t\t\t\t| Do You Want To Activate Alarm?|\n";
	cout << "\t\t\t\t\t| yes / no                      |\n";
	cout << "\t\t\t\t\t|-------------------------------|\n";
	cin >> ans;
	if (ans == "yes")
	{
		system(("cls"));
		cout << "\t\t\t\t\t  Set The Alarm 0:0:0\n";
		cout << "\t\t\t\t\t  --------------------\n";
		cout << "Hr : ";
		cin >> hr_a;
		cout << "Min : ";
		cin >> min_a;
		cout << "Sec : ";
		cin >> sec_a;
		//cin>>hr_a>>min_a>>sec_a;
		cout << "\t\t\t\t\t         AM / PM ?\n";
		cout << "\t\t\t\t\t         -------- \n";
		cin >> PM_AM_a;
	}
	else if (ans == "no")
		cout << "\n";
	else
	{
		system(("cls"));
		cout << "\t\t\t\t\t  Incorect Answer!\n";
		cout << "\t\t\t\t\t  ---------------\n";
		cout << "\t\t\t\t\t  Try Again...\n";
		cout << "\t\t\t\t\t  ------------\n";
		goto b;

	}
	cout << "Loading";
	Sleep(1000);
	cout << ".";
	Sleep(1000);
	cout << ".";
	Sleep(1000);
	cout << ".";
	Sleep(500);
	while (true)
	{
		system(("cls"));
		cout << "\n\n\n\t\t\t\t\t\t  " << hr << " : " << min << " : " << sec << " " << PM_AM;
		if (hr == hr_a && min == min_a && sec == sec_a)
			cout << "\a\n";

		sec++;
		if (sec == 60)
		{
			min++;
			sec = 0;
			if (min == 60)
			{
				hr++;
				min = 0;
			}

			if (hr == 13)
			{
				hr = 1;
				if (PM_AM == "AM")
					PM_AM = "PM";
				else
					PM_AM = "AM";
			}
		}
		Sleep(1000);
	}
	return 0;
}