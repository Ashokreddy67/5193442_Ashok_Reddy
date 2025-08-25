#!/bin/python3

import math
import os
import random
import re
import sys


def equalStacks(h1, h2, h3):
    sum1 = sum(h1)
    sum2 = sum(h2)
    sum3 = sum(h3)
    
    top1 = top2 = top3 = 0
    
    while sum1 != sum2 or sum2 != sum3:
        max_height = max(sum1, sum2, sum3)
        
        if sum1 == max_height:
            sum1 -= h1[top1]
            top1 += 1
        
        if sum2 == max_height:
            sum2 -= h2[top2]
            top2 += 1
            
        if sum3 == max_height:
            sum3 -= h3[top3]
            top3 += 1
    
    return sum1
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n1 = int(first_multiple_input[0])

    n2 = int(first_multiple_input[1])

    n3 = int(first_multiple_input[2])

    h1 = list(map(int, input().rstrip().split()))

    h2 = list(map(int, input().rstrip().split()))

    h3 = list(map(int, input().rstrip().split()))

    result = equalStacks(h1, h2, h3)

    fptr.write(str(result) + '\n')

    fptr.close()
