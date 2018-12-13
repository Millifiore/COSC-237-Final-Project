#include "Monthlist.h"
#include <iostream>
#include <string>
using namespace std;


 void MonthList::displayCal() {
	
	ListNode *current = head->next;
	while (current != nullptr) {
		cout << current->Month << endl;
		int cnt = 0;
		for (int i = 0; i < current->amDays; i++ ) {
			if ((cnt == 6) || (cnt == 13) || (cnt == 20) || (cnt == 27)) {
				cout << " " << endl;
			}
			cout << current->Days[i];
			cout << i + 1 << current->Days[i] << "  ";
			cnt++;
		}
		cout << endl;
		cout << endl;
		current = current->next;
	}
}

void MonthList::appendMonth(string month) {
	ListNode *current = head;
	ListNode *newNode = nullptr;
	if ((month == "January") || (month == "March") || (month == "May") || (month == "July") || (month == "October") || (month == "December") || (month == "August")) {
		newNode = new ListNode(31);
		for (int i = 0; i < 31; i++) {
			newNode->Days[i] = "";
		}
	}
	else if ((month == "April") || (month == "June") || (month == "September") || (month == "November")) {
		newNode = new ListNode(30);
		for (int i = 0; i < 30; i++) {
			newNode->Days[i] = "";
		}

	}
	else if ((month == "February")) {
		newNode = new ListNode(28);
		for (int i = 0; i < 28; i++) {
			newNode->Days[i] = "";
		}
	}
	if (newNode) { 
		newNode->Month = month;
		while (current->next != nullptr) {
			current = current->next;
		}
		current->next = newNode;
	}
}

void MonthList::CreateCal() {
	
	ListNode *current = head;
	for (int i = 0; i < 12; i++ ) {
		if (i == 0) {
			appendMonth("January");
		}
		else if (i == 1) {
			appendMonth("February");
		}
		else if (i == 2) {
			appendMonth("March");
		}
		else if (i == 3) {
			appendMonth("April");
		}
		else if (i == 4) {
			appendMonth("May");
		}
		else if (i == 5) {
			appendMonth("June");
		}
		else if (i == 6) {
			appendMonth("July");
		}
		else if (i == 7) {
			appendMonth("August");
		}
		else if (i == 8) {
			appendMonth("September");
		}
		else if (i == 9) {
			appendMonth("October");
		}
		else if (i == 10) {
			appendMonth("November");
		}
		else if (i == 11) {
			appendMonth("December");
		}
	}
}
