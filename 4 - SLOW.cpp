#include <vector>
#include <iostream>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> combined;
        int i2 = 0;
        int i = 0;
        while (i < nums1.size() && i2 < nums2.size()){
            if (nums1[i] < nums2[i2]){
                combined.push_back(nums1[i]);
                i++;
            } else {
                combined.push_back(nums2[i2]);
                i2++;
            }
        }
        while (i < nums1.size()) combined.push_back(nums1[i++]);
        while (i2 < nums2.size()) combined.push_back(nums2[i2++]);
        for (int i=0; i<combined.size(); i++) cout << combined[i];
        if (combined.size() % 2 == 1){
            return combined[combined.size()/2];
        } else {
            return (combined[combined.size()/2] + combined[combined.size()/2-1])/2.0;
        }
        return 0.0;
}

int main(){
    vector<int> a = {1,3};
    vector<int> b = {2};
    cout << findMedianSortedArrays(a,b) << endl;
    return 0;
}