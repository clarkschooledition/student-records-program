#pragma once

#include "Common.h"
#include <vector>

namespace StudentRecordsCore {

bool enqueueStudent(DataStore& store, int id);
bool dequeueStudent(DataStore& store, Student* removedStudent = nullptr);
std::vector<Student> getQueuedStudents(const DataStore& store);

}
