#!/bin/python3

import math
import os
import random
import re
import sys

#!/bin/python3



MOD = 1000000007

def legoBlocks(n, m):
  
    f = [0] * (m+1)
    f[0] = 1
    for i in range(1, m+1):
        for block in range(1, 5):  
            if i - block >= 0:
                f[i] = (f[i] + f[i-block]) % MOD
    
   
    total = [0] * (m+1)
    for i in range(1, m+1):
        total[i] = pow(f[i], n, MOD) 
    
  
    solid = [0] * (m+1)
    for i in range(1, m+1):
        solid[i] = total[i]  
        for k in range(1, i): 
            solid[i] = (solid[i] - solid[k]*total[i-k]) % MOD
    
    return solid[m]  # final answer
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())

    for t_itr in range(t):
        first_multiple_input = input().rstrip().split()

        n = int(first_multiple_input[0])

        m = int(first_multiple_input[1])

        result = legoBlocks(n, m)

        fptr.write(str(result) + '\n')

    fptr.close()
