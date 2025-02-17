# Iterative deepening DFS
tree = {'A': ['B', 'C'], 'B': ['D', 'E'], 'C': ['F', 'G'], 'D': [], 'E': [], 'F': [], 'G': []}
start = input("Enter start node: ").strip().upper()
goal = input("Enter the goal state: ").strip().upper()
MaxD = int(input("Enter the maximum depth of the tree: "))
path = []  # to store final result
level = 0  # to store current level

def dldfs(start, goal, tree, level, path, depth_limit):
    print("Current level is", level)
    path.append(start)
    if start == goal:
        print("Search ends")
        return path
    if level == depth_limit:
        return False
    print("Expanding current node", start)
    neighbour = tree[start]
    # To explore the neighbours
    for i in neighbour:
        if dldfs(i, goal, tree, level + 1, path, depth_limit):
            return True
        path.pop()  # To find the shortest path dropping the one which will lead to a longer path
    return False

def iddfs(start, goal, tree, MaxD):
    for i in range(MaxD):
        print("Iteration", i)
        path = []
        if dldfs(start, goal, tree, level, path, i):  # passing i because at each depth we have to run the depth limited dfs code (i is passed as depth limit)
            print("Goal Exists")
            print("Path", path)
            return True
        else:
            print("Goal not found")
    return False

iddfs(start, goal, tree, MaxD)