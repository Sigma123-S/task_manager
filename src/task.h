#pragma once
#include <string>

using namespace std;

class Task {
 public:
	string name;
	string description;
	bool done;
	string date;

	Task(const string& n, const string& d, const string& dateStr);
};
