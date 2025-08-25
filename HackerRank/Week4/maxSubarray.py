#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'maxSubarray' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts INTEGER_ARRAY arr as parameter.
#

def maxSubarray(arr):
    max_end = max_so = arr[0]
    
    for i in range(1, len(arr)):
        max_end = max(arr[i], max_end + arr[i])
        max_so = max(max_so, max_end)
    
    pos_sum = sum(x for x in arr if x > 0)
    
    if pos_sum == 0:
        max_subseq = max(arr)
    else:
        max_subseq = pos_sum
    
    return [max_so, max_subseq]
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())

    for t_itr in range(t):
        n = int(input().strip())

        arr = list(map(int, input().rstrip().split()))

        result = maxSubarray(arr)

        fptr.write(' '.join(map(str, result)))
        fptr.write('\n')

    fptr.close()
