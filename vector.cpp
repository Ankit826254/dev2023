#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

std::vector<int> test(std::vector<int> nums)
{
	std::vector<int> temp;
	for(int i=1; i<nums.size()-1; i++) {
		if(nums[i]<nums[i-1] && nums[i]<nums[i+1]) temp.push_back(nums[i]);
	}
	return temp;
 }

int main(){
	//vector<int> nums = {7, 2 ,5, 3, 1, 5, 6};
	vector<int> nums = {1, 2 ,5, 0, 3, 1, 7};
    cout << "Original Vector elements:\n";
	for (int x : nums)
        cout << x << " ";
   vector<int> result = test(nums);
    cout << "\nVector elements that are smaller than its adjacent neighbors:\n";   
        for (int y : result)
        cout << y << "\n";
}
