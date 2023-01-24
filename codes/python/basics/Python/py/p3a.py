def convert_seconds(seconds) :
    hours = seconds//3600
    minutes = (seconds -hours * 3600)//60
    rem_seconds = seconds-hours*3600-minutes*60
    return hours, minutes, rem_seconds

print (convert_seconds(5000))
h , m, s = convert_seconds(6000)
print (h, ':',m,':',s)