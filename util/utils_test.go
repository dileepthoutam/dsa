package util

import "testing"

func TestMinElementIndex(t *testing.T) {
    arr := []int{1, 2, 3, -2}
    want := 3
    got := MinElementIndex(arr)
    if got != want {
        t.Errorf("got %v want %v", got, want)
    }
}
