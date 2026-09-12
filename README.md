# CompSci121BubbleSort
We be sorting with bubbles

constant MAX is max length of array
```
function printValues(array):
    print "["
    for i from 0 to MAX - 1:
        print array[i], followed by ","
    print array[MAX - 1]
    print "]"
```
```
function swap(num1, num2):
    create integer variable temp, set to num1
    set num1 to num2
    set num2 to temp
```
```
function sort(array):
    create integer variable KeepGoing, set to 1
    while KeepGoing > 0:
        set KeepGoing to 0
        for i from 0 to MAX - 1:
            if array[i] > array[i+1]:
                increment KeepGoing
                swap(array[i+1], array[i])
```
```
function main():
    create array values
    print "Before:"
    printValues(values)
    sort(values)
    print "After:"
    printValues(values)
    return 0
```
