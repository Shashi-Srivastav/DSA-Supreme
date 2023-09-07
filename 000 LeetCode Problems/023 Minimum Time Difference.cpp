class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        //step 1 convert time string into int hour & minutes
        vector<int>minutes;
        //step 1 : conv str to int, sum of hr + min in min form
        for(int i = 0;i<timePoints.size();i++){
            string curr = timePoints[i];
            int hours = stoi(curr.substr(0,2));
            int min = stoi(curr.substr(3,2));
            int totalMinutes = hours*60 + min;
            minutes.push_back(totalMinutes);
        }
        //step 2 : sort
        sort(minutes.begin(),minutes.end());
        //step 3 : diff and calc mini diff
        int mini = INT_MAX;
        int n = minutes.size();

        for(int i = 0;i<n-1;i++){
            int diff = minutes[i+1] - minutes[i];
            mini = min(mini,diff);
        }
        //VIP Step : compair mini diff from [0],[n-1];
        int lastDiff1 = (minutes[0] + 1440) - minutes[n-1];
        int lastDiff2 = minutes[n-1] - minutes[0];
        int lastDiff = min(lastDiff1,lastDiff2);
        mini = min(mini,lastDiff);
    return mini;
    }
};