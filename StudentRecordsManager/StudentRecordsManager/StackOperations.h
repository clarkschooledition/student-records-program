#pragma once

#include "Common.h"
#include <vector>

namespace StudentRecordsCore {

inline void pushDeleted(DataStore& store, const Student& student) {
	StackNode* node = new StackNode(student);
	node->next = store.stackTop;
	store.stackTop = node;
}

inline bool popDeleted(DataStore& store, Student* removedStudent = nullptr) {
	if (store.stackTop == nullptr) {
		return false;
	}

	StackNode* node = store.stackTop;
	if (removedStudent != nullptr) {
		*removedStudent = node->data;
	}
	store.stackTop = node->next;
	delete node;
	return true;
}

inline std::vector<Student> getDeletedStudents(const DataStore& store) {
	std::vector<Student> students;
	const StackNode* current = store.stackTop;
	while (current != nullptr) {
		students.push_back(current->data);
		current = current->next;
	}
	return students;
}

}
