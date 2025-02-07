#4To check if the character is a vowel or consonant
ch = readline("Enter a character: ")
ch = as.character(ch)

# Check if the character is a vowel
if(ch == "a" || ch == "e" || ch == "i" || ch == "o" || ch == "u" ||
   ch == "A" || ch == "E" || ch == "I" || ch == "O" || ch == "U") {
  print("Character is a vowel")
} else {
  print("Character is a consonant")
}
