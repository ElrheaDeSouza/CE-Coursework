# List of Lists
tree = {'A' : ['B','C'], 'B':['D','E'], 'C':['F','G'], 'D':[], 'E':[], 'F':[], 'G':[]}
start = input("Enter Start Node: ").strip().upper()
goal = input("Enter Goal Node: ").strip().upper()

def dfs_absolute(tree):
    open = [[start]] # to store list inside list
    close = []
    if start == goal:
        print("Start node is the goal node")
        return [start]
    while open:
        path = open.pop()
        node = path[-1] # access last element
        if node not in close:
            close.append(node)
            neighbor = tree[node]
            for i in neighbor:
                new_path = list(path)
                new_path.append(i) # [(A) +B, (A) +C]
                open.append(new_path)
                if i == goal:
                    return new_path
    print("Goal not found")

print("DFS traversal:", dfs_absolute(tree))