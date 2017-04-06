#include <iostream>

void user_input(double& cost, int& turnover);

int main()
{
using namespace std;
double wholesale_cost;
int shelf_time;
char answer;

cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);
do{
        user_input(wholesale_cost, shelf_time);

        cout << "Wholesale cost is $" << wholesale_cost << endl;
        cout << "Days until sold is now " << shelf_time << endl;
        cout << "Repeat program? \n";
        cout << "Type Y for Yes or N for No.\n";
        cin >> answer;
        cout << endl;
  }while(answer == 'y' || answer == 'Y');
return 0;
}

void user_input(double& cost, int& turnover)
{
using namespace std;
cout << "Enter the wholesale cost of item: $";
cin >> cost;
cout << "Enter the expected number of days until sold: ";
cin >> turnover;
}
