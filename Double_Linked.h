#pragma once
template <typename T>
struct Node {
	T data;
	Node* nextp;
	Node* prevp;
};
Node<int>* head;
int Size = 0;
template <typename T>
Node<T>* CreateNewNode(T x) {
	Node<T>* temp = new Node<T>;
	temp->data = x;
	temp->nextp = nullptr;
	temp->prevp = nullptr;
	return temp;
}
template <typename T>
void push_back(T x) {
	Node<T>* newNode = CreateNewNode(x);
	if (head == nullptr) {
		head = newNode;
		return;
	}
	Node<T>* temp = head;
	while (temp->nextp != nullptr) temp = temp->nextp;
	temp->nextp = newNode;
	newNode->prevp = temp;
	Size++;
}
int get_size() { return Size; }
void print_list() {
	Node<int>* temp = head;
	while (temp != nullptr) {
		cout << temp->data << " ";
		temp = temp->nextp;
	}
	cout << endl;
}
void fill_the_list(int N) {
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		push_back(temp);
	}
}
void Del_the_list() {
	if (head->nextp!=nullptr){
		Node<int>* temp = head;
		head = head->nextp;
		head->prevp = nullptr;
		delete temp;
		Del_the_list();
		Size--;
	}
	if (get_size() == 0)
		cout << "The list removed succesfully" << endl;
}