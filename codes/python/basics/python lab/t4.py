principle = int(input("enter principle : "))
rate = int(input("enter rate : "))
time = int(input("enter years :"))

amount = principle*((1 + (rate/100))**time)
compound_interest = amount - principle

print("compound interest = {}".format(compound_interest))