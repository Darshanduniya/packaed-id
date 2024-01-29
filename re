import re

with open("your_file.txt", "r") as f:
    for line in f:
        matches = re.findall(r"%([^%]+)%.+", line)
        if matches:
            print(matches[0])
