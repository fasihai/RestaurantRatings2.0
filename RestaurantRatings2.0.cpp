#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>
#include <math.h>
#include <cctype>

using namespace std;

int main() {


	string ratngs, restaurants, inptline, rater, id, line;
	ifstream file, file2, file3;
	ofstream outfile;
	float avrg, accum, countr, namecount;
	int restrate, balance, mins, newbala, countr2;
	char transcode;


		cout << "*Restaurant Ratings*\n";
		file.open("/Users/fasihatiq/Desktop/a42data1.txt");
		if (!file.is_open())
		{
			cout << "Open Failure!!!\n";
			return 4;
		}
		getline(file, rater, '\n');
    	cout << "Name of Rater - " << rater << "\n";
    	getline(file, inptline, '\n');
    	countr = 0;
		while (!file.eof())
		{
			restaurants = inptline.substr(0,14);
			ratngs = inptline.substr(15);
			cout << "Restaurants and Ratings - " << restaurants << ratngs << "\n";
			getline(file, inptline, '\n');
			countr = countr + 1;
			restrate = stoi(ratngs);
			accum = accum + restrate;
		}
		cout << "The total number of Restaurants - " << countr << "\n";
		avrg = accum / countr;
		cout << "The average Rating - " << fixed << showpoint << setprecision(1) << avrg << "\n";
		file.close();



		cout << "\n* Phone Usage*\n";

		file2.open("/Users/fasihatiq/Desktop/a42data2.txt");
		if (!file2.is_open())
		{
			cout << "Open Failure!!!\n";
			return 4;
		}

		file2 >> id;
		cout << "Account ID: " << id << "\n";
		file2 >> balance;
		cout << "The starting balance in minutes: " << balance << "\n";
		cout << "Please enter A or C followed by the minutes, or Q to stop\n";
		cin >> transcode;
		transcode = tolower(transcode);
		newbala = balance;
		while (transcode != 'q')
		{
			cin >> mins;
				if (transcode == 'a')
				{
					cout << "You added " << mins << " minutes.\n";
					newbala = newbala + mins;
					cout << "New minutes balance is " << newbala << "\n";
					cout << "Please enter A or C followed by the minutes, or Q to stop\n";
					cin >> transcode;
				}
				else if (transcode == 'c')
				{
					if (mins > balance)
					{
						cout << "You can't make the call because you don't have enough minutes!\n";
						newbala = newbala - 0;
					}
					else
					{
						cout << "You've made a call for " << mins << " minutes.\n";
						newbala = newbala - mins;
						cout << "Your new minutes balance is " << newbala << "\n";
					}
  	  	  	  	cout << "Please enter A or C followed by the minutes, or Q to stop\n";
  	  	  	   	cin >> transcode;
				}
				else
				{
					cout << "That is not a valid transaction code! Try again!\n";
					cout << "Please enter A or C followed by the minutes, or Q to stop\n";
					cin >> transcode;
				}
		}
		cout << "Thank you, and have a good day.\n\n";
		file2.close();

    				outfile.open("/Users/fasihatiq/Desktop/a42data2out.txt");
    				if (!outfile.is_open())
   					{
    					cout << "Open Failure!!!\n";
    					return 4;
   					}
    				outfile << id << "  " << newbala << "\n";
		outfile.close();




		cout << "\n*Sports Stars*\n";
		file3.open("/Users/fasihatiq/Desktop/a42data3.txt");
		if (!file3.is_open())
		{
			cout << "Open Failure!!!\n";
			return 4;
		}

		namecount = 0;
		countr2 = 0;
		getline(file3, line, '\n');
		while (!file3.eof())
		{
			cout << line<< "\n";
			namecount = namecount + 1;
				if (line[0] == 'L')
				{
					countr2++;
				}
			getline(file3, line, '\n');
		}
		cout << "*** End of the names list ***\n";
		cout << namecount << " the total names\n";
		cout << countr2 << " names beginning with the letter “L”\n";
		file3.close();




return 0;

}
