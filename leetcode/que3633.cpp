#include <vector>
#include <algorithm>
#include <climits>
using namespace std;


class Solution {
public:
    int calc(vector<int>& firstStart,
             vector<int>& firstDur,
             vector<int>& secondStart,
             vector<int>& secondDur) {

        int minEnd = INT_MAX;

        for (int i = 0; i < firstStart.size(); i++) {
            minEnd = min(minEnd, firstStart[i] + firstDur[i]);
        }

        int ans = INT_MAX;

        for (int i = 0; i < secondStart.size(); i++) {
            ans = min(ans,
                      max(minEnd, secondStart[i]) + secondDur[i]);
        }

        return ans;
    }

    int earliestFinishTime(vector<int>& landStartTime,
                           vector<int>& landDuration,
                           vector<int>& waterStartTime,
                           vector<int>& waterDuration) {

        int landFirst =
            calc(landStartTime, landDuration,
                 waterStartTime, waterDuration);

        int waterFirst =
            calc(waterStartTime, waterDuration,
                 landStartTime, landDuration);

        return min(landFirst, waterFirst);
    }
};