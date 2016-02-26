//CODEFIGHTS # Given array of integers, find the index of its minimal element.

#include<iostream>
#include<vector>

using namespace std;

int arrayMinimumIndex(vector<int>inputArray);

int main()
{
	// test

	vector<int> v = { 7, 3, 21, -5, 2, 0, 4 };
	cout << "The index of the minimal element is: " << arrayMinimumIndex(v) << endl;

	v = { 0, 3, -2, 700 };
	cout << "The index of the minimal element is: " << arrayMinimumIndex(v) << endl;

	/*v = {};
	cout << "The index of the minimal element is: " << arrayMinimumIndex(v) << endl;*/

	return 0;
}

int arrayMinimumIndex(vector<int> inputArray) {

	/*if (inputArray.empty())
	{
		cout << "The array is empty.\n";
		return -1; //???
	}*/

	int min = inputArray[0];

	for (size_t i = 1; i < inputArray.size(); i++)
	{
		if (inputArray[i] < min)
		{
			min = inputArray[i];
		}
	}

	for (size_t i = 0; i < inputArray.size(); i++)
	{
		if (inputArray[i] == min)
		{
			return i;
		}
	}
	return -1;
}