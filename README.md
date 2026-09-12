# CompSci121BubbleSort
We be sorting with bubbles

constant MAX is max length of array
function sort (array):
    create integer variables i and j
    for i from zero to MAX - 1:
        for j from zero to MAX - 1:
            if array[j] > array[j+1]:
                swap array[j] with array[j+1]
                printArray(array)onstant MAX is max length of array

function printValues(array):
    print "["
    for i from 0 to MAX - 2:
        print array[i], followed by ","
    print array[MAX - 1]
    print "]"

function swap(num1, num2):
    create integer variable temp, set to num1
    set num1 to num2
    set num2 to temp

function sort(array):
    create integer variable KeepGoing, set to 1
    create integer variable i

    while KeepGoing > 0:
        set KeepGoing to 0
        for i from 0 to MAX - 2:
            if array[i] > array[i+1]:
                increment KeepGoing
                swap(array[i+1], array[i])

function main():
    create array values, set to [7, 3, 9, 4, 6, 1, 2, 8, 5]

    print "Before:"
    printValues(values)

    sort(values)

    print "After:"
    printValues(values)

    return 0
