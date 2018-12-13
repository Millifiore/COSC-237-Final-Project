#include <iostream>
#include <string>
using namespace std;
#ifndef Months_H
#define Months_H

struct ListNode {
	string Month;
	string * Days;
	int amDays;

	ListNode(int D) {	//D will need to change based on the different amount of days for the each month.		// This is the array inside the node.
		amDays = D;			// amount of days 
		Days = new string[D];
	}
	ListNode *next = nullptr;
};

class MonthList {
	private:
		ListNode * head = new ListNode(0);

	public:
		MonthList() {};
		void displayCal();	// Goes through the stack and displays the info for each month.
		void appendMonth(string month); // Appends a node when needed for a full calndar of 12.
		void CreateCal();	// Should create 12 nodes (13 in total) to represent 12 months.
};

#endif