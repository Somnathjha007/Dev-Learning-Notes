package main

import "fmt"

func makeSlice() []int {
	num := []int{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
	// for i:= range make([]int,10) {
	// 	num = append(num, i+1)
	// }
	return num
}

func check(i []int) {
	for i, chk := range i {
		if chk%2 == 0 {
			fmt.Println(" Even : ", i+1)
		} else {
			fmt.Println("Odd : ", i+1)
		}
	}
}
