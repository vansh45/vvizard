def pig_latin(text):
  y=[]
  say = ""
  # Separate the text into words
  words = text.split()
  for word in words:
    # Create the pig latin word and add it to the list
    say = word[1:]+word[0]+"ay"
    # Turn the list back into a phrase
    y.append(say)
    z= " ".join(y)
  return z

print(pig_latin("hello how are you")) # Should be "ellohay owhay reaay ouyay"
#print(pig_latin("programming in python is fun")) # Should be "rogrammingpay niay ythonpay siay unfay"