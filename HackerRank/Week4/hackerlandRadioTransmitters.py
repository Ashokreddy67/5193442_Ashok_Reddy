#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'hackerlandRadioTransmitters' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER_ARRAY x
#  2. INTEGER k
#

def hackerlandRadioTransmitters(x, k):
    x.sort()
    
    transmitters = 0
    i = 0
    n = len(x)
    
    while i < n:
        transmitters += 1
        start = x[i]
        transmitter_limit = start + k
        
        transmitter_pos = start
        while i < n and x[i] <= transmitter_limit:
            transmitter_pos = x[i]
            i += 1
        
        coverage_end = transmitter_pos + k
        i -= 1
        
        while i < n and x[i] <= coverage_end:
            i += 1
    
    return transmitters


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    k = int(first_multiple_input[1])

    x = list(map(int, input().rstrip().split()))

    result = hackerlandRadioTransmitters(x, k)

    fptr.write(str(result) + '\n')

    fptr.close()
