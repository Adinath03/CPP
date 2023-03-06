class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int mprofit = 0;
        int buy = prices[0];
        int i = 0;
        while (i < prices.size())
        {
            if (buy > prices[i])
            {
                buy = prices[i];
            }
            else
            {
                mprofit = max(mprofit, (prices[i] - buy));
            }
            i++;
        }
        return mprofit;
    }
};