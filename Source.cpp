#include "hanoi_tower.h"
#include "Double_Linked.h"
int main() {
	int menu;
	cout << "Practical work#6 IKBO-03-21 Kushkhov.I.A. V15\n===============MENU===============\n1.Hanoi Tower\n2.Double linked list\n0.Exit" << endl;
	do {
		cout<<"The number of the task: ";
		cin >> menu;
		if (menu == 1)
			executeApp1();
		else if (menu == 2) {
			cout << "Enter the size of your list: ";
			int N;
			cin >> N;
			cout << "Enter the list:";
			fill_the_list(N);
			cout << "Your list:";
			print_list();
			Del_the_list();
		}
		else cout << "Enter the number in range [0,2]!" << endl;
	} while (menu != 0);
	system("Pause>NULL");
}