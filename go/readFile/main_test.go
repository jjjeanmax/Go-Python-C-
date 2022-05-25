package main

import (
	"testing"
)

func MainFromFile(b *testing.B) {
	for n := 0; n < b.N; n++ {
		main()
	}
}
