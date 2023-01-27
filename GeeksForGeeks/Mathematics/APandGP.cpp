#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool arithematicProgression(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int d = nums[1] - nums[0];
    int ans;

    for(int i = 2; i < nums.size(); i++) {
        if(nums[i] - nums[i-1] != d) {
            return false;
        }
    }
    return true;
}

bool geometricProgression(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int d = nums[1] / nums[0];

    for(int i = 2; i < nums.size(); i++) {
        if(nums[i] / nums[i-1] != d) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    if(arithematicProgression(nums)) {
        cout << "Arithmetic" << endl;
    } else if(geometricProgression(nums)) {
        cout << "Geometric" << endl;
    } else {
        cout << "Neither AP nor GP" << endl;
    }
    return 0;
}
