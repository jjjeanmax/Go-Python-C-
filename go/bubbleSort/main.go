package main

import (
	"fmt"
	"math/rand"
	"time"
)

func bubbleSort(sorting []int) {
	size := len(sorting)
	if size < 2 {
		return
	}
	for i := 0; i < size; i++ {
		for j := size - 1; j >= i+1; j-- {
			if sorting[j] < sorting[j-1] {
				sorting[j], sorting[j-1] = sorting[j-1], sorting[j]
			}
		}
	}
}

func generateSlice(n int) []int {
	s := make([]int, 0, n)
	for i := 0; i < n; i++ {
		s = append(s, rand.Intn(1e9))
	}
	return s
}
func main() {
	list := generateSlice(10000)
	start := time.Now()
	bubbleSort(list)
	fmt.Println("duration:", time.Now().Sub(start))

}
