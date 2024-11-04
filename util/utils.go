package util

func MinElementIndexHelper(arr []int, index int, minIndex int) int {
    if index >= len(arr) {
        return minIndex
    }
    if arr[index] < arr[minIndex] {
        minIndex = index
    }
    return MinElementIndexHelper(arr, index + 1, minIndex)
}

func MinElementIndex(arr []int) int {
    return MinElementIndexHelper(arr, 0, 0)
}
