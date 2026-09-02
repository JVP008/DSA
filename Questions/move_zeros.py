from typing import List

def moveZerosToEnd(arr: List[int]) -> List[int]:
    index = []
    count = arr.count(0)
    arr = [x for x in arr if x!=0]
    arr.extend([0]*count)
    return arr
    
# debug your code below
print(moveZerosToEnd([0, 1, 0, 3, 12]))