#ifndef Months_H
#define Months_H

class MonthList {
	private:
		struct ListNode {
			double value;
			struct ListNode *next;
		};

		ListNode *head;

	public:
		MonthList()
		{head = nullptr;}

		void displayMonths() const;
		// void importData() 
};

#endif