
data <- read.csv("d:/AITD/SEM VI/DSA/Expt4/Book2.csv", header = TRUE)
print(data)
mean_value <- mean(data$GPA, na.rm = TRUE)
print(mean_value)
