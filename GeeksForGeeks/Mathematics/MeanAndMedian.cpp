#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int mean(vector<int>& nums) {
    int sum = 0;
    for(int i = 0; i < nums.size(); i++) {
        sum += nums[i];
    }
    return sum / nums.size();
}

int median(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    if(nums.size()%2 == 0)
        return (nums[nums.size()/2] + nums[nums.size()/2 - 1])/2;
    else
        return nums[nums.size()/2];
}   

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << mean(nums) << endl;
    cout << median(nums) << endl;
    return 0;
}