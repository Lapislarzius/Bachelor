import ast

def bubblesort(elements):
	swapped = False
	# Looping from size of array from last index[-1] to index [0]
	for n in range(len(elements)-1,0,-1):
		for i in range(n):
			if elements[i] > elements[i + 1]:
				swapped = True
				# swapping data if the element is less than next element in the array
				elements[i], elements[i + 1] = elements[i + 1], elements[i]	
		if not swapped:
			# exiting the function if we didn't make a single swap
			# meaning that the array is already sorted.
			return

li = list(map(int, input('Bitte geben sie eine Zahlenfolge ein.\n').strip().split(',')))
bubblesort(li)
if len(li) % 2 == 1:
    print('Der Median von {} lautet {}'.format(li,li[int((len(li)-1)/2)]))
else:
    print((li[int((len(li)-1)/2)] + li[int(len(li)/2)])/2)