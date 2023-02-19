
#include <iostream>


using namespace std;

int main()
{
	int pollution_level[6];
	int average = 0;
	int counter = 1;

	while(counter <= 6)
	{
		cout << "Enter pollution level for day-" << counter << " range (1-100): ";
        int x;
        cin>>pollution_level[counter];
        if(!cin.fail()){
            cout<<"yes";
            counter++;
            
        }else{
            cout<<"NOOOOOOOO";
            
            break;
        }
	}

	return 0;
}