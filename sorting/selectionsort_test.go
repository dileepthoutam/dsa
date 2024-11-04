package sorting

import (
	"reflect"
	"testing"
)

func TestSelectionSortIterative(t *testing.T) {
    want := []int{1, 2, 3, -1, -2}
    SelectionSortRecursive(want)
    got := []int{-2, -1, 1, 2, 3}

    if !reflect.DeepEqual(got, want) {
        t.Errorf("got %v want %v", got, want)
    }
}

