import random
import time

def binary_search(item_list, item):
	first = 0
	last = len(item_list)-1
	found = False
	while(first<=last and not found):
		mid = (first + last)//2
		if item_list[mid] == item :
			found = True
		else:
			if item < item_list[mid]:
				last = mid - 1
			else:
				first = mid + 1	
	return found

def generateSlice(n): 
	s = []
	for _ in range(n): 
		s.append(n)
	s.sort()
	return s

def temit(func, arr):
    start = time.time_ns()
    func(arr, 555)
    end = time.time_ns()
    return (end - start)

if __name__ == "__main__":
	# fact check
	times = []
	arr = generateSlice(100000)
	print(temit(binary_search, arr))

	for _ in range(100000):
		times.append(temit(binary_search, arr))
	print(sum(times) / len(times))