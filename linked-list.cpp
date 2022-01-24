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

Node* reverseLinkedList(Node* head) {
	if (head || head->next)
		return head;
	Node* resultantNode = reverseLinkedList(head->next);
	head->next->next = head;
	head->next = nullptr;
	return resultantNode;
}

Node* insertNode(Node* head, int value) {
	Node* newNode = new Node(value);
	if (head == nullptr)
		head = newNode;
	else {
		Node* ptr = head;
		while (ptr->next) {
			ptr = ptr->next;
		}
		ptr->next = newNode;
	}
	return head;
}

Node* insertNodeAtHead(Node* head, int value) {
	Node* newNode = new Node(value);
	newNode->next = head;
	head = newNode;
	return head;
}

void printLinkedList(Node* head) {
	Node* ptr = head;
	while (ptr) {
		cout << ptr->value << " ";
		ptr = ptr->next;
	}
	cout << "\n";
}

int main() {

}
