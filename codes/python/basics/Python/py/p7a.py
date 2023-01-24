file_counts ={"jpg":10, "txt":14,"csv":2,"py":24}
print(file_counts["txt"])

print("html" in file_counts)

# dictonaries are mutable
file_counts["txt"] = 8

del file_counts["csv"] 
print(file_counts)