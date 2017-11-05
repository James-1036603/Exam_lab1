// Exercising the Screen class
#include "screen.h"
#include <iostream>

using namespace std;

int main()
{
	//Initial T
	Screen myScreen{6,6, ' '};	
	for(auto i = 1u; i != myScreen.width() ; i++)
	{
		myScreen.move(1,i);
		myScreen.set('o');		
	}
	for(auto i = 1u; i != myScreen.height() ; i++)
	{
		myScreen.move(i,myScreen.width()/2);
		myScreen.set('o');
	}
	
		
		
	myScreen.display();

	

	return 0;
}

