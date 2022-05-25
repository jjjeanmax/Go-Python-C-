package binarySearch

func binarySearch(haystack []int, needle int) bool {
	// start := time.Now()

	low := 0
	high := len(haystack) - 1
	found := false

	for low <= high && !found {
		mid := (low + high) / 2

		if haystack[mid] == needle {
			found = true
		} else if haystack[mid] < needle {
			low = mid + 1
		} else {
			high = mid - 1
		}
	}
	// duration := time.Since(start)
	// fmt.Println("", duration)

	return found

}
