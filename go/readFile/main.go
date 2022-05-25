package main

import (
	"fmt"
	"io/ioutil"
	"time"
)

func main() {
	start := time.Now()
	ioutil.ReadFile("./link.txt")
	fmt.Println("duration:", time.Now().Sub(start))
}
