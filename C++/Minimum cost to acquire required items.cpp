class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, long long need1, long long need2) {
        if (cost1 + cost2 < costBoth) {
            costBoth = cost1 + cost2;
        }
        if (need1 > need2) {
            swap(need1, need2);
            swap(cost1, cost2);
        }
        if (cost2 > costBoth) {
            cost2 = costBoth;
        }

        return costBoth * need1 + cost2 * (need2 - need1);
    }
};