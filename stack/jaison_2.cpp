#include <bits/stdc++.h>
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
        cin>>x;
        
		// cin >> pollution_level[counter-1];
        if(!cin.fail()){
           
        
     pollution_level[counter-1]=x;
        int day = pollution_level[counter-1];
          
        if(day <= 100){
		average = average + pollution_level[counter-1];
        counter++;
        } else  {

            cout << day ;
            cout << "Range from 1-100 Only !!" << endl;
            cout << "Try again !" << endl;
    // 
        }
        }
	}
	cout << endl;
	cout << "The average pollution level over those 6 days was:" << average / 6 << "%";

	return 0;
}