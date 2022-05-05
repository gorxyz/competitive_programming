import strings
import time
import rand
import os


fn odd_even_increments(){
	t := os.input()
	mut a := []
	for x in 0..t {
		n := os.input()
		for i in 0..n {
			a[i] = os.input()
		}
		for k in 0..100000 {
			for v in 0..a.len {
				if v !=0 && v % 2 != 0 {
					a[v] = a[v + 1]
				}
				if v !=0 && v % 2 == 0 {
					a[v] = a[v + 1]
				}
			}
			even := a.filter(it % 2 == 0)
			od := a.filter(it % 2 != 0)
			if even.len == a.len || od.len == a.len {
				println(k)
				break
			}
		}
	}
}

fn main() {
	odd_even_increments()
}
