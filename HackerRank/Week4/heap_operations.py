import heapq
import sys

def heap_operations(queries):
    heap = []
    valid = set()
    output = []
    
    for q in queries:
        if q[0] == 1: 
            x = q[1]
            heapq.heappush(heap, x)
            valid.add(x)
        
        elif q[0] == 2:  
            x = q[1]
            valid.remove(x)  
        
        else: 
          
            while heap[0] not in valid:
                heapq.heappop(heap)
            output.append(heap[0])
    
    return output


if __name__ == "__main__":
    q = int(sys.stdin.readline().strip())
    queries = []
    for _ in range(q):
        parts = list(map(int, sys.stdin.readline().strip().split()))
        queries.append(parts)
    
    results = heap_operations(queries)
    for r in results:
        print(r)

