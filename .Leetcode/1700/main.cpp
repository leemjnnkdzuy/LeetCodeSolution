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
	int res = 0;
	while (!students.empty() && res < students.size())
	{
		if (students.front() == sandwiches.front())
		{
			students.erase(students.begin());
			sandwiches.erase(sandwiches.begin());
			res = 0;
		}
		else
		{
			students.push_back(students.front());
			students.erase(students.begin());
			res++;
		}
	}
	return students.size();
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