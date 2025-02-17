# R program to read student marks and compute the grade and percentage

# Function to calculate percentage
calculate_percentage <- function(marks) {
return(sum(marks) / length(marks))
}

# Function to determine grade based on percentage
determine_grade <- function(percentage) {
  if (percentage >= 90) {
    return("A")
  } else if (percentage >= 80) {
    return("B")
  } else if (percentage >= 70) {
    return("C")
  } else if (percentage >= 60) {
    return("D")
  } else {
    return("F")
  }
}

# Main program
num_subjects <- as.integer(readline(prompt = "Enter the number of subjects: "))
marks <- numeric(num_subjects)

for (i in 1:num_subjects) {
  marks[i] <- as.numeric(readline(prompt = paste("Enter marks for subject", i, ": ")))
}

percentage <- calculate_percentage(marks)
grade <- determine_grade(percentage)

print(paste("Percentage:", percentage))
print(paste("Grade:", grade))
