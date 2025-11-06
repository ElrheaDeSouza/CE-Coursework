#NAND Gate
import numpy as np
def mc_culloch_pit(x, w, threshold):
    weighted_sum = np.dot(x, w)
    if weighted_sum >= threshold:
        return 0
    else :
        return 1
    
X =np.array([[0,0], [0,1], [1,0], [1,1]])
w=[]
print(f"Enter inputs for weights : ")
for i in range(0,2):
    print("W", i, " : ", end="")
    element = int(input())
    w.append(element)
print(f"Enter inputs for threshold : ")
threshold = int(input())
for x in X:
    output = mc_culloch_pit(x, w, threshold)
    print(f"Input : {x}, Output : {output}")
