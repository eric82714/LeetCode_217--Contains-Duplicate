class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        if not nums: return False        
        return True if len(nums) != len(set(nums)) else False
