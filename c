with open("your_file.txt", "r") as f:
    for row in f:
        percent_indices = [i for i, char in enumerate(row) if char == '%']

        if len(percent_indices) >= 2:
            second_percent_index = percent_indices[1]
            text_after_second_percent = row[second_percent_index + 1:]
            print(text_after_second_percent)
        else:
            print("No second occurrence of '%' in the row.")
