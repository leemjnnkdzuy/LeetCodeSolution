#include <bits/stdc++.h>
#define FI "input.INP"
using namespace std;

void test(bool check)
{
	if (check)
		freopen(FI, "r", stdin);
}

int countStudents(vector<int> &students, vector<int> &sandwiches)
{
	int res = students.size();

	int i = 0;
	int j = 0;
	while (i < sandwiches.size() || j < students.size())
	{
		if (sandwiches[i] == students[j])
		{
			sandwiches.erase(sandwiches.begin());
			students.erase(students.begin());
		} else {
			students.erase(students.begin());
		}
		
	}

	return res;
}

void func()
{
	vector<int> student = {1, 1, 0, 0};
	vector<int> sandwiches = {0, 1, 0, 1};
	cout << countStudents(student, sandwiches);
}

int main()
{
	test(true);
	func();
	return 0;
}