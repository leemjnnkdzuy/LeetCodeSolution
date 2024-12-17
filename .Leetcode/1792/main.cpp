#include <bits/stdc++.h>

using namespace std;

#define FI "input.INP"

void run_debug(bool check){
	if(check)
		freopen(FI, "r", stdin);
}

double cal(vector<vector<int>>& classes){	
	double res = 0;

	for (int i = 0; i < classes.size(); i++)
	{
		res += (double)classes[i][0] / (double)classes[i][1];
	}

	return res / classes.size();
}

double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {

	while (extraStudents != 0)
	{
		int flag = 0;
		double max = cal(classes);

		for (int i = 0; i < classes.size(); i++)
		{
			classes[i][0]++;
			classes[i][1]++;

			if (cal(classes) > max)
			{
				max = cal(classes);
				flag = i;
			}
			
			classes[i][0]--;
			classes[i][1]--;
		}

		classes[flag][0]++;
		classes[flag][1]++;

		extraStudents--;
	}

	
	return cal(classes);
}

void func(){
	int x, extraStudents;
	vector<vector<int>> classes;
	cin >> x >> extraStudents;
	classes.resize(x, vector<int>(2));
	for (int i = 0; i < x; i++)
	{
		cin >> classes[i][0] >> classes[i][1];
	}

	cout << maxAverageRatio(classes, extraStudents);
}

int main(){
	run_debug(true);
	func();
	return 0;
}