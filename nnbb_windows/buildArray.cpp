/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

#include <vector>
#include <iostream>
using std::vector;
using std::cout;
using std::endl;

class solution_1920 {

public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> result;
        for (int i = 0; i < nums.size(); ++i) {
            result.push_back(nums[nums[i]]);
        }
        return result;
    }
};

int main() {
    vector<int> nums{ 0, 2, 1, 5, 3, 4 };
    solution_1920 s;
    vector<int> result;
    result = s.buildArray(nums);
    for (int i = 0; i < nums.size(); ++i) {
        cout << result[i] << " ";
    }
    cout << endl;


    return 0;
}