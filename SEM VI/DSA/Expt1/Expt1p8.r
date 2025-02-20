#8 R program to find the minimum and maximum of numbers stored in a vector

# Function to find the minimum and maximum
find_min_max <- function(numbers) {
  min_value <- min(numbers)
  max_value <- max(numbers)
  return(list(min = min_value, max = max_value))
}

# Main program
input_numbers <- readline(prompt = "Enter numbers separated by spaces: ")
number_vector <- as.numeric(unlist(strsplit(input_numbers, " ")))

min_max_result <- find_min_max(number_vector)
print(paste("Minimum value:", min_max_result$min))
print(paste("Maximum value:", min_max_result$max))