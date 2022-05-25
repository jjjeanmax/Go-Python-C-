package binarySearch

import (
	"testing"
)

func MainBinarySearch100000(b *testing.B) {
	var list []int
	b.StopTimer()
	for i := 0; i <= 100000; i++ {
		list = append(list, i)
	}
	b.StartTimer()
	for n := 0; n < b.N; n++ {
		binarySearch(list, 555)
	}
}
