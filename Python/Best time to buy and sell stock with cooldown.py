class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        sell, buy, prev_sell, prev_buy = 0, -prices[0], 0, 0

        if len(prices) < 2:
            return 0
        
        for price in prices:
            prev_buy = buy
            buy = max(prev_sell - price, prev_buy)
            prev_sell = sell
            sell = max(prev_buy + price, prev_sell)
            
        return sell