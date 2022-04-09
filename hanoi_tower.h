#include <iostream>
using namespace std;

//Ханойская башня 
void move_disk(unsigned short from, unsigned short to) {

	cout << from << "->" << to<<" ";
}
void hanoi_tower(unsigned short num_of_disks, unsigned short from, unsigned short to, unsigned short available) {
	if (num_of_disks == 0)
		return;
	hanoi_tower(num_of_disks - 1, from, available, to);
	move_disk(from, to);
	hanoi_tower(num_of_disks - 1, available, to, from);
}
void executeApp1() {
	unsigned short from, to, count;
	cout << "Enter the first position: ";
	cin >> from;
	cout << endl << "Enter the final position: ";
	cin >> to;
	cout << endl << "Enter the count of disks: ";
	cin >> count;
	if (from > 3 || to > 3 || from * to == 0) cout << "ERROR! The values of positions should be in range [1,3]" << endl;
	else {
		cout << "The result is-->" << endl;

		if (from + to == 3)
			hanoi_tower(count, from, to, 3);
		else {
			if (from + to == 4)
				hanoi_tower(count, from, to, 2);
			else
				hanoi_tower(count, from, to, 1);
		}
	}
	cout << endl;
}












































