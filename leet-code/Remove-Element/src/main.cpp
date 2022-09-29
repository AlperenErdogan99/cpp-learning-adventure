#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // Counter for count and track values other than val
        int count = 0;

	// Check every element of the vector
        for (int i=0 ; i < nums.size() ; i++){

	    // Update nums array, if the element is not val
            if (nums[i] != val){
                nums[count++] = nums[i];
            }

        }

        // return count of the different element
        return count;
    }
};

int main(){}
