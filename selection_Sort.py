def selection_sort_function(Array, total_size_of_Array):
 
    for x in range(total_size_of_Array):
        minimum_index =x
        for y in range(x + 1, total_size_of_Array):
            if Array[y] < Array[minimum_index]:
                minimum_index = y
                
        (Array[x], Array[minimum_index]) = (Array[minimum_index], Array[x])

Array=[-1, 35, 0, 9, -8]
total_size_of_Array = len(Array)
selection_sort_function(Array, total_size_of_Array)
print('Sorted Array :')
print(Array)
