def to_smash(total_candies,friends=3):

    #                             ^
    # default argument -----------|
    """Return the number of leftover candies that must be smashed after distributing
    the given number of candies evenly between 3 friends.
    """
    return total_candies % friends

print(to_smash(92,11))
