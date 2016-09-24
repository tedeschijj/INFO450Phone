// phoneBook.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
using namespace std;
const int MAXLEN = 10;
const int MAXCOL = 2;
const int MAXSIZE = 50;
void addPerson(char myList[MAXLEN][MAXCOL][MAXSIZE]);
void showPerson(char myList[MAXLEN][MAXCOL][MAXSIZE], int numEntered);
void checkIt(char myList[MAXLEN][MAXCOL][MAXSIZE]);





int main()
{
	char myPhone[MAXLEN][MAXCOL][MAXSIZE];
	char userReply='a';
	int x, y;
	
	
	cout << "What do you want to do? " << endl;
	cout << "[A]dd new entry " << endl;
	cout << "[D]isplay " << endl;
	cout << "[Q]uit" << endl;
	

		for (x = 0; x < MAXLEN && (userReply == 'A') || (userReply == 'a'); x++)
		{
			for (y = 0; y < MAXCOL && (userReply == 'A') || (userReply == 'a'); y++)
			{
				
					addPerson(myPhone);
					cout << "If adding another user, enter A." << endl;
					cin >> userReply;
					cin.clear();
					cin.ignore();
					
				}
				
			}
		
	
		
		if ((userReply != 'A') && (userReply != 'a') && (userReply != 'D') && (userReply != 'd') && (userReply != 'Q') && (userReply != 'q'))
		{
			cout << "Finished entering information." << endl;
			cout << "What do you want to do? " << endl;
			cout << "[D]isplay " << endl;
			cout << "[Q]uit" << endl;
			cin.clear();
			cin.ignore();
			cin >> userReply;
			
		}
		
		
		if ((userReply == 'D') || (userReply == 'd'))
		{
			
			showPerson(myPhone, y);
			cout << "Enter Q to quit. "<<endl;
			cin >> userReply;
			cin.clear();
			cin.ignore();
			
		}


		if ((userReply == 'Q') || (userReply == 'q'))
		{
			return 0;
		}

		if ((userReply != 'A') && (userReply != 'a') && (userReply != 'D') && (userReply != 'd') && (userReply != 'Q') && (userReply != 'q'))
		{
			cout << "Finished entering information." << endl;
			cout << "What do you want to do? " << endl;
			cout << "[D]isplay " << endl;
			cout << "[Q]uit" << endl;
			cin >> userReply;
			cin.clear();
			cin.ignore();
		}

	

	//return 0;
	} 




void addPerson(char myList[MAXLEN][MAXCOL][MAXSIZE])
{
	static int i = 0;
	
		if (i >= MAXLEN)
		{
			cout << "list is full" << endl;
		}
		else{
				{
					cout << "Enter name: " << endl;
					gets_s(myList[i][0]);
					cout << "Enter Number" << endl;
					gets_s(myList[i][1]);
					i++;
				}
				
			}
			//}
			//else{
			//	cout << "User already exists" << endl;

		//	}
			}




void showPerson(char myList[MAXLEN][MAXCOL][MAXSIZE], int numEntered)
{
	static int i;
	for (i = 0; i < numEntered; i++)
	{
		cout << "  " << endl;
		cout <<"Entry " <<i+1<< endl;
		cout << myList[i][0]<< endl;
		cout << myList[i][1] << endl;
		
	}
}


