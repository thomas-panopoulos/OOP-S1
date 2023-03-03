//seudo code
// iterate through original array, then append all unique elements to new array (maybe use vector as set length will not work here)
// then, find total number of each unique element in original array.
// weight = (occurences/total-original-length)
// return weighted average by sum of (unique element * weight)