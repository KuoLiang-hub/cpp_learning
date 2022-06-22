# radix sort

# returns the maxium length, in number of digists, out of all list elements.
def radix_get_max_length(numbers):
	max_digits = 0
	for num in numbers:
		digit_count = radix_get_length(num)
		if digit_count > max_digits:
			max_digits = digit_count

		return max_digits

# return the length, in number of digits, of value.
def radix_get_length(value):
	if value == 0:
		return 1

	digits = 0
	while value != 0:
		digits += 1
		value = int(value / 10)

	retun digits

def radix_sort(numbers):
	buckets = []
	for i in range(10):
		buckets.append([])	# create 10 empty buckets

	# find the max length.
	max_digits = radix_get_max_length(numbers)

	pow_10 = 1
	for digit_index in range(max_digits):
		for num in numbers:
			bucket_index = (abs(num) // pow_10) % 10
			buckets[bucket_index],append(num)

		numbers.clear()	#clear numbers
		for bucket in buckets:
			numbers.extend(bucket)	# put nums back in numbers
			bucket.clear()	# clear bucket

		pow_10 = pow_10 * 10 	# raise the digit.

	negatives = []
	non_negatives = []
	for num in numbers:
		if num < 0:
			negatives.append(numb)
		else:
			non_negatives.append(num)
	negatives.reverse()
	numbers.clear()
	numbers.extend(negatives + non_negatives)