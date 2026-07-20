#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    long long solve(vector<int>& Astart, vector<int>& Adur,
                    vector<int>& Bstart, vector<int>& Bdur) {

        int m = Bstart.size();

        vector<pair<int,int>> b;

        for(int i=0;i<m;i++)
            b.push_back({Bstart[i], Bdur[i]});

        sort(b.begin(), b.end());

        vector<long long> suffix(m+1, 1e18);

        for(int i=m-1;i>=0;i--) {
            suffix[i] = min(
                suffix[i+1],
                (long long)b[i].first + b[i].second
            );
        }

        vector<long long> prefix(m);

        prefix[0] = b[0].second;

        for(int i=1;i<m;i++)
            prefix[i] = min(prefix[i-1],
                            (long long)b[i].second);

        long long ans = 1e18;

        for(int i=0;i<Astart.size();i++) {

            long long endA =
                (long long)Astart[i] + Adur[i];

            int pos = upper_bound(
                b.begin(),
                b.end(),
                make_pair((int)endA, INT_MAX)
            ) - b.begin();

            if(pos > 0)
                ans = min(ans,
                          endA + prefix[pos-1]);

            if(pos < m)
                ans = min(ans,
                          suffix[pos]);
        }

        return ans;
    }

    int earliestFinishTime(vector<int>& landStartTime,
                           vector<int>& landDuration,
                           vector<int>& waterStartTime,
                           vector<int>& waterDuration) {

        long long x =
            solve(landStartTime, landDuration,
                  waterStartTime, waterDuration);

        long long y =
            solve(waterStartTime, waterDuration,
                  landStartTime, landDuration);

        return (int)min(x, y);
    }
};