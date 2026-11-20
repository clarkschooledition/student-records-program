#pragma once

#include "Common.h"

namespace StudentRecordsCore {

Student* createArray(const DataStore& store, int& count);
bool compareStudents(Student first, Student second, int criteria);
void bubbleSort(Student arr[], int count, int criteria);
void selectionSort(Student arr[], int count, int criteria);
void mergeSortRecursive(Student arr[], Student temp[], int left, int right, int criteria);
void mergeSort(Student arr[], int count, int criteria);

}
