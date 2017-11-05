#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

bool firstFiveGuesses(int generatedNumber)
{
	auto guessedCorrectly = false;
	auto guessedNumber = 0;
	for(auto i = 0; i<5; i++)
	{
		cout<<"Guess a number from 0 to 100"<<endl;
		cin>>guessedNumber;
		if(guessedNumber == generatedNumber)
			{	
				guessedCorrectly = true;
				break;
			}
	}
	return guessedCorrectly;
}

bool continueGuessing(int generatedNumber)
{
	auto guessedCorrectly = false;
	auto guessedNumber = 0;
	while(!guessedCorrectly)
	{
		cout<<"Guess a number from 0 to 100"<<endl;
		cin>>guessedNumber;
		if(guessedNumber == generatedNumber) guessedCorrectly = true;
		else if(guessedNumber < generatedNumber) cout<<"Guess Higher"<<endl;
		else cout<<"Guess Lower"<<endl;
	}
	return guessedCorrectly;
}

int main()
{
	cout<<"Welcome to the guessing game. Five chances to guess right or wrong. gl;hf"<<endl;
	srand(time(NULL));
	auto generated_number = rand()%100+1;
	cout<<generated_number<<endl;
	if(firstFiveGuesses(generated_number)) cout<<"You win!"<<endl;
	else continueGuessing(generated_number);
	return 0;
}
