package searching

import "testing"

func TestBinarySearch(t *testing.T) {
    arr := []int{1, 2, 3, 4, 5}
    target := 4

    want := 3
    got := BinarySearch(arr, target)

    if got != want {
        t.Errorf("got %d want %d", got, want)
    }
}
