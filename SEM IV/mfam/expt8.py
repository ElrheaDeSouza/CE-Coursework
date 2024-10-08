import matplotlib.pyplot as plt

# Probability distribution of rolling two dice
dice_outcomes = list(range(2, 13))
dice_probabilities = [0] * len(dice_outcomes) # Initialize probabilities to 0
# Calculate the probabilities
for die1 in range(1, 7):
    for die2 in range(1, 7):
        sum_val = die1 + die2
        dice_probabilities[sum_val - 2] += 1 / 36
# Plotting the bar chart
plt.bar(dice_outcomes, dice_probabilities)
plt.xlabel('Sum')
plt.ylabel('Probability')
plt.title('Marginal Probability Distribution: Sum of Two Dice Rolls')
plt.xticks(dice_outcomes)
plt.show()