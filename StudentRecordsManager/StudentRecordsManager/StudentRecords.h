#pragma once

#include "Common.h"
#include "StackOperations.h"
#include <algorithm>
#include <cctype>
#include <string>
#include <vector>

namespace StudentRecordsCore {

inline bool addStudent(DataStore& store, const Student& student) {
	if (store.findStudent(student.id) != nullptr) {
		return false;
	}

	Node* node = new Node(student);
	if (store.head == nullptr) {
		store.head = node;
		return true;
	}

	Node* current = store.head;
	while (current->next != nullptr) {
		current = current->next;
	}
	current->next = node;
	return true;
}

inline Node* findStudentById(DataStore& store, int id) noexcept {
	return store.findStudent(id);
}

inline bool linearSearch(const DataStore& store, int id, Student& result) {
	const Node* current = store.head;

	while (current != nullptr) {
		if (current->data.id == id) {
			result = current->data;
			return true;
		}

		current = current->next;
	}

	return false;
}

inline bool binarySearch(const DataStore& store, int id, Student& result) {
	if (store.head == nullptr) {
		return false;
	}

	int count = 0;

	for (Node* current = store.head; current != nullptr;
		current = current->next) {
		count++;
	}

	Student* arr = new Student[count];

	Node* current = store.head;

	for (int i = 0; i < count; i++) {
		arr[i] = current->data;
		current = current->next;
	}

	std::sort(arr, arr + count,
		[](Student a, Student b) {
			return a.id < b.id;
		});

	int low = 0;
	int high = count - 1;

	while (low <= high) {
		int mid = low + (high - low) / 2;

		if (arr[mid].id == id) {
			result = arr[mid];
			delete[] arr;
			return true;
		}

		if (arr[mid].id < id) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}

	delete[] arr;
	return false;
}

inline std::vector<Student> findStudentsByLastName(const DataStore& store, const std::string& lastName) {
	std::vector<Student> matches;
	const Node* current = store.head;

	while (current != nullptr) {
		const std::string& candidate = current->data.lastName;
		if (candidate.size() == lastName.size()) {
			bool matchesLastName = true;
			for (std::size_t i = 0; i < candidate.size(); ++i) {
				const unsigned char candidateCharacter = static_cast<unsigned char>(candidate[i]);
				const unsigned char searchCharacter = static_cast<unsigned char>(lastName[i]);
				if (std::tolower(candidateCharacter) != std::tolower(searchCharacter)) {
					matchesLastName = false;
					break;
				}
			}
			if (matchesLastName) {
				matches.push_back(current->data);
			}
		}
		current = current->next;
	}

	return matches;
}

inline bool updateStudent(DataStore& store, int id, const Student& updatedStudent) {
	Node* node = store.findStudent(id);
	if (node == nullptr) {
		return false;
	}

	node->data = updatedStudent;
	node->data.id = id;
	return true;
}

inline bool deleteStudent(DataStore& store, int id) {
	Node* current = store.head;
	Node* previous = nullptr;

	while (current != nullptr && current->data.id != id) {
		previous = current;
		current = current->next;
	}
	if (current == nullptr) {
		return false;
	}

	pushDeleted(store, current->data);
	if (previous == nullptr) {
		store.head = current->next;
	}
	else {
		previous->next = current->next;
	}
	delete current;
	return true;
}

}
	