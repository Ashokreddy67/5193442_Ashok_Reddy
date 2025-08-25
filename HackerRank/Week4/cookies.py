#!/bin/python3


import os
import heapq


def cookies(k, A):
    heapq.heapify(A)
    count = 0
    
    while len(A) > 1 and A[0] < k:
        l_sweet = heapq.heappop(A)
        secondl_sweet = heapq.heappop(A)
        new_sweet = l_sweet + 2 * secondl_sweet
        heapq.heappush(A, new_sweet)
        count += 1
    
    if A[0] >= k:
        return count
    else:
        return -1
 
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    k = int(first_multiple_input[1])

    A = list(map(int, input().rstrip().split()))

    result = cookies(k, A)

    fptr.write(str(result) + '\n')

    fptr.close()
