#include <iostream>
#include <vector>
using namespace std;

// Driver Method
int main()
{
	vector<vector<int> > vec{ { 1, 2, 3,4},
							{ 4, 5, 6,7 },
							{ 7, 8, 9 ,8} };


	// for (int i = 0; i < 3; i++) {
	// 	for (
	// 		auto it = vec[i].begin();
	// 		it != vec[i].end(); it++)
	// 		cout << *it << " ";
	// 	cout << endl;
	// }


    int a=vec[0].size();
    cout<<a;
	return 0;
}
