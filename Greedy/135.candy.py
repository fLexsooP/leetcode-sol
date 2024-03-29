#
# @lc app=leetcode id=135 lang=python3
#
# [135] Candy
#

# @lc code=start
class Solution:
    def candy(self, ratings: List[int]) -> int:
        candies = [1 for _ in range(len(ratings))]

        for i in range(len(ratings) - 1):
            if ratings[i] < ratings[i + 1]:
                candies[i + 1] = candies[i] + 1
                
        for i in reversed(range(len(ratings) - 1)):
            if ratings[i] > ratings[i + 1]:
                candies[i] = max(candies[i + 1] + 1, candies[i])

        return sum(candies)
# @lc code=end
