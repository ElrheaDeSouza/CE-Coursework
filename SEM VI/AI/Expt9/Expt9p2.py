#OR Gate
import numpy as np
def activation(f):
    if f>0.5:
        return 1
    else:
        return 0
       
def neuron(x,w,b):
    r=np.dot(x,w)+b
    return activation(r)
   
def ORgate(x):
    w=np.array([1,1])
    b=0.5
    return neuron(x,w,b)
example1=np.array([0,0])
example2=np.array([0,1])
example3=np.array([1,0])
example4=np.array([1,1])

print("OR(0,0)",ORgate(example1))
print("OR(0,1)",ORgate(example2))
print("OR(1,0)",ORgate(example3))
print("OR(1,1)",ORgate(example4))
