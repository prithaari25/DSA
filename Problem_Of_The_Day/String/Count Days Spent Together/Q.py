class Solution:
    def countDaysTogether(self, arriveAlice: str, leaveAlice: str, arriveBob: str, leaveBob: str) -> int:
        
        before = [0, 31, 59, 90, 120, 151,
                  181, 212, 243, 273, 304, 334]
        
        def toDays(date):
            month, day = map(int, date.split('-'))
            return before[month - 1] + day
        
        start = max(toDays(arriveAlice), toDays(arriveBob))
        end = min(toDays(leaveAlice), toDays(leaveBob))

        return max(0, end - start + 1)


        