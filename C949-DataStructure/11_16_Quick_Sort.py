#! usr/bin/env python3
# quick sort algorithem

def partition(numbers, start_index, end_index):
	# Select the middle value as the pivot.
	midpoint = start_index + (end_index - start_index) // 2
	pivot = numbers[midpoint]

	# low & high start at ends of list and move towards each other
	low = start_index
	high = end_index

	done = False
	while not done:
		# increment low 
		while numbers[low] < pivot:
			low = low + 1

		# decrement high 
		while pivot < numbers[high]:
			high = high - 1

		# if low & high crossed each other, the loop is done.
		# if not, the elements are swapped, low is incremented & high is decremented.
		if low >= high:
			done = True
		else:
			temp = numbers[low]
			numbers[low] = numbers[high]
			numbers[high] = temp
			low = low + 1
			high = high -1
	# high is the last index in the left segment.
	return high

def quicksort(numbers, start_index, end_index):
	# only sort list segment with at least 2 elements
	if end_index <= start_index:
		return

	# partition the list segment
	high = partition(numbers, start_index, end_index)

	# recursively sort the left segment
	quicksort(numbers, start_index, high)

	# recursively sort the right segment
	quicksort(numbers, high + 1, end_index)
	

