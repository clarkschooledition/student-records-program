#pragma once

#include <string>

namespace StudentRecordsCore {

struct Student {
	int id = 0;
	std::string firstName;
	std::string middleInitial;
	std::string lastName;
	std::string course;
	double gpa = 0.0;
};

struct Node {
	Student data;
	Node* next;

	explicit Node(const Student& student) : data(student), next(nullptr) {}
};

struct StackNode {
	Student data;
	StackNode* next;

	explicit StackNode(const Student& student) : data(student), next(nullptr) {}
};

struct QueueNode {
	Student data;
	QueueNode* next;

	explicit QueueNode(const Student& student) : data(student), next(nullptr) {}
};

class DataStore {
public:
	Node* head;
	StackNode* stackTop;
	QueueNode* frontNode;
	QueueNode* rearNode;

	DataStore() noexcept
		: head(nullptr), stackTop(nullptr), frontNode(nullptr), rearNode(nullptr) {}

	DataStore(const DataStore&) = delete;
	DataStore& operator=(const DataStore&) = delete;

	~DataStore() {
		clear();
	}

	Node* findStudent(int id) noexcept {
		Node* current = head;
		while (current != nullptr) {
			if (current->data.id == id) {
				return current;
			}
			current = current->next;
		}
		return nullptr;
	}

	int countStudents() const noexcept {
		int count = 0;
		const Node* current = head;
		while (current != nullptr) {
			++count;
			current = current->next;
		}
		return count;
	}

	void clear() noexcept {
		while (head != nullptr) {
			Node* current = head;
			head = head->next;
			delete current;
		}

		while (stackTop != nullptr) {
			StackNode* current = stackTop;
			stackTop = stackTop->next;
			delete current;
		}

		while (frontNode != nullptr) {
			QueueNode* current = frontNode;
			frontNode = frontNode->next;
			delete current;
		}

		rearNode = nullptr;
	}
};

}
