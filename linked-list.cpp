#include <bits/stdc++.h>
using namespace std;

struct Node {
	int value;
	struct Node* next;
	Node(int value) {
		this->value = value;
		this->next = nullptr;
	}
};

void print_linked_list(Node* head) {
	Node* ptr = head;
	while (ptr) {
		cout << ptr->value << " ";
		ptr = ptr->next;
	}
	cout << "\n";
}

Node* insert_node_at_tail(Node* head, int value) {
	Node* new_node = new Node(value);
	if (head == nullptr)
		head = new_node;
	else {
		Node* ptr = head;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new_node;
	}
	return head;
}

Node* insert_node_at_head(Node* head, int value) {
	Node* new_node = new Node(value);
	new_node->next = head;
	head = new_node;
	return head;
}

Node* delete_node_at_head(Node* head) {
	if (head == nullptr)
		return nullptr;
	head = head->next;
	return head;
}

Node* delete_node_at_tail(Node* head) {
	if (head == nullptr)
		return nullptr;
	Node* ptr = head;
	Node* prev = nullptr;
	while(ptr->next) {
		prev = ptr;
		ptr = ptr->next;
	}
	prev->next = ptr->next;
	return head;
}

int main() {

	srand(time(0));
	Node* head = nullptr;

	for(int i=0; i<5; i++)
		head = insert_node_at_tail(head, rand()%100);
	print_linked_list(head);
	head = delete_node_at_tail(head);
	head = delete_node_at_tail(head);
	head = delete_node_at_tail(head);
	print_linked_list(head);




	return 0;
}

