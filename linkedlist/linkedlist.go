package linkedlist

import (
	"strconv"
)

type Node struct {
    data int
    next *Node
}

type LinkedList struct {
    head *Node
    tail *Node
}

func New() *LinkedList {
    return new(LinkedList).Init()
}

func (l *LinkedList) Init() *LinkedList {
    l.head = nil
    l.tail = nil
    return l
}

func (l *LinkedList) PushBack(data int) {
    newNode := &Node{data: data, next: nil}
    if l.head == nil {
        l.head = newNode
    } else {
        l.tail.next = newNode
    }
    l.tail = newNode
}

func (l *LinkedList) String() string {
    list := ""
    current := l.head
    for current != nil {
        list += strconv.Itoa(current.data)
        current = current.next
        if current != nil {
            list += " "
        }
    }
    return list
}

func mergeSortedLists(l1 *Node, l2 *Node) *Node {
    if l1 == nil { return l2 }
    if l2 == nil { return l1 }
    if l1.data < l2.data {
        l1.next = mergeSortedLists(l1.next, l2)
        return l1
    }
    l2.next = mergeSortedLists(l1, l2.next)
    return l2
}

func (l *LinkedList) MergeSortedList(o *LinkedList) {
    l.head = mergeSortedLists(l.head, o.head)
}

func (l *LinkedList) Reverse() {
    current := l.head
    var prev *Node

    for current != nil {
        next := current.next
        current.next = prev
        prev = current
        current = next
    }
    l.tail = l.head
    l.head = prev
}

