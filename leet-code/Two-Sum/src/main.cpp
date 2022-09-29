/*
	we can show our problem with mathematically. Our equation is 'target = num1 + num2'. But we need to look differently to this equation
        for easy answer. 'target - num1 = num2'. And now we need to find c. Therefore we loop through in array and calculate complement one by one.
        we can find our answer if our hash map is contating complement value.
*/

#include <map>
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         map<int,int> numsMap;
         vector<int> pairs;
        
         // loop through vector
         for(int i=0; i<nums.size(); i++){

             // get complement
             int complement = target - nums[i];
             
             // search complement into map
             if(numsMap.find(complement) != numsMap.end() ){
                    // add result to pairs
                    pairs.push_back(numsMap.find(complement)->second);
                    pairs.push_back(i);
                    break;
                 
             }
             
             // add value to map
             numsMap.insert(pair<int,int>(nums[i],i));
             
         }
        return pairs;
        
    }
};

int main(){}
