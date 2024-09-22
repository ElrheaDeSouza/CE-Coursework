'''
def equation(a,b,c):
 x=-(b + c) / a
 return (x)
a=int(input("enter the value of a:"))
b=int(input("enter the value of b:"))
c=int(input("enter the value of c:"))
y=equation(a,b,c)
print("value of x is ",y)
'''
'''
def equation(a,b,c,d):
  if a==c and b==d:
    print("Infinite Solutions")
  elif a==c:
    print("Wrong Equation: No Solution")
  else:
    X = (d-b)/(a-c)
    print("Solution is X = ",X)
a=int(input("enter the value of a: "))
b=int(input("enter the value of b: "))
c=int(input("enter the value of c: "))
d=int(input("enter the value of d: "))
equation(a,b,c,d)
'''

import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import axis3d

# Lorenz attractor parameters
sigma = 10
rho = 28
beta = 8/3

# Initial conditions
x, y, z = (0.1, 0, 0)

# Time span
t = np.linspace(0, 25, 10000)
dt = t[1] - t[0] # time step

# Integrate the Lorenz system using Euler's method
def lorenz(x, t0, sigma, rho, beta, dt):
    x1, x2, x3 = x
    dx1dt = sigma * (x2 - x1)
    dx2dt = x1 * (rho - x3) - x2
    dx3dt = x1 * x2 - beta * x3
    return np.array([x1 + dx1dt*dt, x2 + dx2dt*dt, x3 + dx3dt*dt])

x_t = [(x, y, z)]
for i in range(1, len(t)):
    x, y, z = lorenz((x, y, z), t[i-1], sigma, rho, beta, dt)
    x_t.append((x, y, z))
x, y, z = zip(*x_t)

# Plot the Lorenz attractor
fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')
ax.plot(x, y, z, lw=0.5, color='blue')
ax.set_xlabel('X axis')
ax.set_ylabel('Y axis')
ax.set_zlabel('Z axis')
plt.show()