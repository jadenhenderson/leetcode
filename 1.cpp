#include <vector>
#include <iostream>
#include <string>
using namespace std;


vector<int> twoSum(const vector<int>& nums, int target) {
    for (int i=0; i<nums.size()-1; i++){
        for (int j=i+1; j<nums.size(); j++){
            if (nums[i] + nums[j] == target){
                return {i,j};
            }
        }
    }
    return {0};
}

int main(){
    vector<int> output = twoSum({2,3,4}, 6);
    cout << output[0] << output[1];
    return 0;
}