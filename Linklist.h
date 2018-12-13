#ifndef Months_H
#define Months_H

class MonthList {
	private:
		struct ListNode {
			string Month;
			string *Days;
			ListNode(const int D) {
				string arr[D];
				Days = arr;
			}
			struct ListNode *next;
		};

		ListNode *head;
		int Year;

	public:

		MonthList()
		{head = nullptr;}

		void displayMonths() const;
		void appendMonth(string,const int D)
		void CreateYear() const:
		
};
#endif
