//tle use dp
class Solution {
public:
    int mincostHelper(vector<int>& days, vector<int>& costs, int i) {
        // Base case
        if (i >= days.size()) return 0;

        // Solve for buying a 1-day pass
        int cost1 = costs[0] + mincostHelper(days, costs, i + 1);

        // Find the last day that can be covered by a 7-day pass
        int passEndDay7 = days[i] + 6;
        int j7 = i;
        while (j7 < days.size() && days[j7] <= passEndDay7) {
            j7++;
        }
        // Solve for buying a 7-day pass
        int cost7 = costs[1] + mincostHelper(days, costs, j7);

        // Find the last day that can be covered by a 30-day pass
        int passEndDay30 = days[i] + 29;
        int j30 = i;
        while (j30 < days.size() && days[j30] <= passEndDay30) {
            j30++;
        }
        // Solve for buying a 30-day pass
        int cost30 = costs[2] + mincostHelper(days, costs, j30);

        // Return the minimum cost among the three options
        return min(cost1, min(cost7, cost30));
    }

    int mincostTickets(vector<int>& days, vector<int>& costs) {
        return mincostHelper(days, costs, 0);
    }
};