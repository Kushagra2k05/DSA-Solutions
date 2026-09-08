class Solution(object):
    def numberOfWeeks(self, milestones):
        total = sum(milestones)
        mx= max(milestones)
        other = total -mx
        return min(total,2*other+1)
        