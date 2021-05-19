#include <iostream>
#include <string>
using namespace std;

class node {
public:
	int value;
	node * next;
	node() { next = nullptr; }
	node(int v) { value = v; next = nullptr; }
};

class Linked_List {
public:
	int num_nodes;
	node * head;
	Linked_List() { num_nodes = 0; head = nullptr; }
	void make_10_nodes();
	void print_linked_list();
	void remove_node(int i);
	void sum();
	void reverse();
};

void Linked_List::reverse() {
	if (num_nodes < 2) return;
	node * p1 = head;
	node* p2 = p1->next;
	node* p3;
	while (p2 != nullptr) {
		if (p1 == head) p1->next = nullptr;
		p3 = p2->next;
		p2->next = p1;
		p1 = p2;
		p2 = p3;
	}
	head = p1;
}

void Linked_List::sum() {
	node *p3 = head;
	int sum = 0;
	while (p3 != nullptr) {
		sum = sum + p3->value;
		p3 = p3->next;
	}
	cout << sum << endl;
}

void Linked_List::make_10_nodes() {
	node * p;
	for (int i = 9; i>=1; i--) {
		p = new node(i);
		p->next = head;
		head = p;
		num_nodes++;
	}
}

void Linked_List::print_linked_list() {
	node * p1 = head;
	while (p1 != nullptr) {
		cout << p1->value << " ";
		p1 = p1->next;
	}
	cout << " " << endl;
}
void Linked_List::remove_node(int i) {
	node * p3;
	if (num_nodes == 0) { cout << "List is empty"; return; }
	if (head->value == i) {
		p3 = head;
		head = head->next;
		delete p3;
		num_nodes--;
		return;
	}
	node *p1 = head, *p2 = p1->next;
	while (p2 != nullptr) {
		if (p2->value == i) {
			p1->next = p2->next;
			delete p2;
			num_nodes--;
			return;
		}
		p1 = p2;
		p2 = p2->next;
	}
	cout << "No node with that value" << endl;
}



int main() {

	Linked_List L1;
	L1.make_10_nodes();
	L1.print_linked_list();
	int x;
	cout << "remove what node?";
	cin >> x;
	L1.remove_node(x);
	L1.print_linked_list();
	L1.sum();
	L1.reverse();
	L1.print_linked_list();
	
	getchar();
	getchar();
	return 0;
}
