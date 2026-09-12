# CompSci121BubbleSort
We be sorting with bubbles

constant MAX is max length of the array
Values should be an array
```
function printValues(Values):
    print "["
    for i from 0 to MAX - 1:
        print Values[i], followed by ","
    print Values[MAX - 1]
    print "]"
```
```
function swap(num1, num2):
    create integer variable temp, set to num1
    set num1 to num2
    set num2 to temp
```
NumSet is an array
```
function sort(NumSet):
    create integer variable KeepGoing, set to 1
    while KeepGoing > 0:
        set KeepGoing to 0
        for i from 0 to MAX - 1:
            if NumSet[i] > NumSet[i+1]:
                increment KeepGoing
                swap(NumSet[i+1], NumSet[i])
                printValues(NumSet)
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
