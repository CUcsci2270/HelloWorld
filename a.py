from heapq import heappush, heappop
#min heap
h = []

#represent graph as a dictionary
graph = {}
#Main sequence
#Read stdin

N, M = input().strip().split(' ')
N = int(N)
M = int(M)
#setting up the graph
for i in range(0, M):
    x,y,r = input().split(' ')

    r = int(r)
    if x in graph:
        graph[x][y] = r
    else:
        graph[x] = {y:r}
S = input()
#Prim's Algorithm
adjNodes = graph[S]
smallest = 0
smallestKey = None
heappush(h, graph[S])
for node in graph:
    for anode in adjNodes:
        if graph[node][anode] < smallest:
            smallest = min(smallest, graph[node][anode])


    del graph[node]
