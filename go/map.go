package main

import "fmt"

func main() {
	got := make(map[int]string)
	got[1] = "a"
	got[2] = "b"
	got[3] = "c"
	fmt.Println()

	fmt.Println("original Map: ", got)
	fmt.Println("KEY\tELEMENT")
	for key, values := range got {
		fmt.Println(key, "\t", values)

	}

	fmt.Println()
	fmt.Println("Let's Updated the ned")
	fmt.Println("KEY\tELEMENT")

	fmt.Println()
	delete(got, 3)
	for key, values := range got {
		fmt.Println(key, "\t", values)

	}
	fmt.Println("Updated Map: ", got)
}
