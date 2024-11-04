package sorting

import "github.com/dileepthoutam/dsa/util"

func selectionSortRecHelper(arr []int, index int) {
    if index >= len(arr) {
        return
    }
    minIndex := util.MinElementIndexHelper(arr, index, index)
    if arr[minIndex] < arr[index] {
        arr[index], arr[minIndex] = arr[minIndex], arr[index]
    }
    selectionSortRecHelper(arr, index + 1)
}

func SelectionSortRecursive(arr []int) {
    selectionSortRecHelper(arr, 0)
}

func SelectionSort(arr []int) {
    for i := 0; i < len(arr) - 1; i++ {
        minIndex := i
        for j := i + 1; j < len(arr); j++ {
            if arr[j] < arr[minIndex] {
                minIndex = j
            }
        }
        arr[i], arr[minIndex] = arr[minIndex], arr[i]
    }
}

