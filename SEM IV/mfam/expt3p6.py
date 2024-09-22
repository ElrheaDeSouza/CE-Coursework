#p6 max min, mean, standard deviation, variance
import numpy as np
x = np.array([[10,2,34],[4,48,6],[77,8,9]])
max_element = np.max(x)
min_element = np.min(x)
print("Max element is ",max_element)
print("Min element is ",min_element)

mean_value = np.mean(x)
print("Mean is ",mean_value)

#Standard deviation
std_deviation = np.std(x)
print("Standard deviation is ",std_deviation)

#Return variance
variance = np.var(x)
print("Variance is ",variance)
