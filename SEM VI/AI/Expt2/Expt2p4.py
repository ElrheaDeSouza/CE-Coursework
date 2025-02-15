# Depth Limited DFS
tree = {'A': ['B', 'C'], 'B': ['D', 'E'], 'C': ['F', 'G'], 'D': [], 'E': [], 'F': [], 'G': []}
start = input("Enter start node: ").strip().upper()
goal = input("Enter the goal state: ").strip().upper()
depth_limit = int(input("Enter the depth limit: "))
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

result = dldfs(start, goal, tree, level, path, depth_limit)
if result:
    print("Goal node found")
    print("Path is", path)
else:
    print("Goal not found")