# A* Search
graph = [['A','B',1,2],['A','C',2,4],['A','H',7,0],['B','D',4,2],['B','E',6,6],['C','F',3,3],['C','G',2,2],['D','E',7,6],['D','H',5,0],['G','H',2,0],['F','H',1,0]]

start = input("Enter the start node: ").strip().upper()
goal = input("Enter the goal state: ").strip().upper()

temp = [] # TO store heads
temp1 = [] # store the Tails

for i in graph:
    temp.append(i[0])
    temp1.append(i[1])

nodes = set(temp).union(set(temp1))
g = dict()
h = dict()
f = dict()
Path = dict()
Open = set()
Close = set()

for i in nodes:
    g[i] = 9999
    h[i] = 0
    f[i] = 9999
    Path[i] = ''
   
Open.add(start)
g[start] = 0
Path[start] = start

for i in graph:
    h[i[0]] = i[3]
    h[i[1]] = i[3]
f[start] = g[start]+ h[start]

def astar(graph,Open,Close,g,h,f,Cur_node):
    if Cur_node in Open:
        Open.remove(Cur_node)
    Close.add(Cur_node)
   
    for i in graph:
        if(i[0]== Cur_node and g[i[0]] + i[2]  < g[i[1]]):
            Open.add(i[1])
            g[i[1]] = g[i[0] ]+ i[2]
            f[i[1]] = g[i[1]] + h[i[1]]
            Path[i[1]] = Path[i[0]] + '->' + i[1]
    f[Cur_node] = 9999
    smallest = min(f, key=f.get)
    if smallest not in Close:
        astar(graph,Open,Close,g,h,f,smallest)
       
astar(graph,Open,Close,g,h,f,start)
print("Path is",Path[goal])
print("Cost is",g[goal])