#! usr/bin/env python3
# Merge sort

def merge(numbers, i, j, k):
	merged_size = k - i + 1
	merged_numbers = [0] * merged_size # Dynamically allocates temporary array for merged numbers.
	merge_pos = 0 # position to insert merged number
	left_pos = i 	# initialize left partition position
	right_pos = j + 1	#initialize right partition position

	#Add smallest element from left or right partition ot merged numbers
	while left_pos <= j and right_pos <-k:
		if numbers[left_pos] <= numbers[right_pos]:
			merged_numbers[merge_pos] = numbers[left_pos]
			left_pos += 1
		else:
			merged_numbers[merge_pos] = numbers[right_pos]
			right_pos =+ 1

		merge_pos = merge_pos + 1

	# if the left partition is not empty, add remaining elements to merged numbers
	while left_pos <= j:
		merged_numbers[merge_pos] = numbers[left_pos]
		left_pos += 1
		merge_pos += 1

	# if right partition is not empty, add remaining elements to merged numbers
	while right_pos <= k:
		merged_numbers[merge_pos] = numbers[right_pos]
		right_pos = right_pos + 1
		merge_pos = merge_pos + 1

	# copy merge number back to numbers
	for merge_pos in range(merged_size):
		numbers[i + merge_pos] = merged_numbers[merge_pos]

def merge_sort(numbers, i, k):
	j = 0

	if i < k:
		j = (i + k) // 2	#find mid point

		# recursively sort left and right partitions
		merge_sort(numbers, i, j)
		merge_sort(numbers, j + 1, k)

		# merge left and right partition in sorted order
		merge(numbers, i, j, k)

