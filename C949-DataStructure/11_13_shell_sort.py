#! /usr/bin/env python3
# shell sort
def insertion_sort_interleaved(numbers, start_index, gap):
	for i in range(start_index + gap, len(numbers), gap):
		j = i
		while (j -gap >= start_index) and (numbers[j] < numbers[j - gap]:
			temp = numbers[i]
			numbers[j] = numbers[j - gap]
			numbers[j - gap] = temp
			j = j -gap
			

#shell sort algo
def shell_sort(numbers, gap_values):
	for gap_value in gap_values:
		for i in range(gap_value):
			insertion_sort_interleaved(numbers, i, gap_value)