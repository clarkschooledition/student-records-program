#pragma once

#include "Common.h"

namespace StudentRecordsCore {

struct StudentStatistics {
	int totalStudents = 0;
	double averageGpa = 0.0;
	int highestGpaCount = 0;
	int averageGpaCount = 0;
	int lowestGpaCount = 0;
	double lowestNumericalGpa = 0.0;
	double highestNumericalGpa = 0.0;
};

StudentStatistics calculateStudentStatistics(const DataStore& store);

}
