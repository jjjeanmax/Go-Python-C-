package main

import (
	"testing"
)

func MainBubbleSort10000(b *testing.B) {
	for n := 0; n < b.N; n++ {
		b.StopTimer()
		s := generateSlice(10000)
		b.StartTimer()
		bubbleSort(s)
	}
}
