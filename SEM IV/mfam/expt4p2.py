#p2 Singular value decomposition:
import numpy as np
from scipy import linalg
A = np.array([[1,2,3],[4,5,6]])
print(A)
M,N = A.shape
U,s,Vh = linalg.svd(A)
Sig = linalg.diagsvd(s,M,N)
U, Vh = U, Vh
print(U)
print(Sig)
print(Vh)
b=U.dot(Sig.dot(Vh))
print(b)