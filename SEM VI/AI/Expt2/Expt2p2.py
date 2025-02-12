# Goal Search
tree = {'A': ['B', 'C'], 'B': ['D', 'E'], 'C': ['F', 'G'], 'D': [], 'E': [], 'F': [], 'G': []}
start = input("Enter start node: ").strip().upper()
goal = input("Enter the goal node: ").strip().upper()

def dfs_traversal(tree):
    Open = [start]
    close = []
    if start == goal:
        print("Start node is the goal node")
        return start
    while Open:
        node = Open.pop()
        if node not in close:
            close.append(node)
            neighbour = tree[node]
            for i in neighbour:
                Open.append(i)
                if i == goal:
                    close.append(i)
                    return close
    print("Goal not found")
    return close

print("DFS traversal is ", dfs_traversal(tree))