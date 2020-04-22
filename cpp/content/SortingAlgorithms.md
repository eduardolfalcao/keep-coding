# Sorting Algorithms

There are plenty of situations where we need to sort a set of elements:
1. Card games
2. E-commerce sites (sort by rating, price, discount, etc)
3. Dictionary (words sorted)

**Sorting is arranging the elements in a list or collection in increasing or decreasing order of some property.**

It is common to study sorting wit a list of integers:
1. [2, 3, 9, 4, 6] &rarr; (increasing) [2, 3, 4, 6, 9]
2. [2, 3, 9, 4, 6] &rarr; (decreasing) [2, 3, 4, 6, 9]
3. [2, 3, 9, 4, 6] &rarr; (increasing order of number of factors) [2, 3, 9, 4, 6]

We can also sort lexicografically: ["fork", "knife", "mouse", "screen", "key"]
And, finally, we can also sort a more complex data sctructure: a list of Products, according to price, rating, popularity, etc.

Sort is important, because:
- when you have such a collection with this property of **being sorted** you can perform **binary search, which is O(lg<sub>2</sub>n)**.
- when you have such a collection **unsorted** you cannot perform binary search, you'll have to do **linear search, which is O(n)**.

In a hypothetical situation that a comparison is performed in *1 ms* and n = 2<sup>64</sup>, then:
- if list is unsorted, we would need to perform linear search, which would take 2<sup>64</sup> ms, what amounts to some years;
- if list is sorted, we could perform binary search, which would take lg<sub>2</sub>2<sup>64</sup> ms, i.e., 64 ms.

Main sorting algorithms:
1. Selection Sort
2. Bubble Sort
3. Insertion Sort
4. Merge Sort
5. Quick Sort
6. Heap Sort
7. Counting Sort
8. Radix Sort
8. Bucket Sort

Classification of algorithms:
- time complexity: how the execution time grows with input size
- space complexity (memory usage): in-place (constant memory) or out-of-place (memory grows with input size)
- stability: 

&nbsp;  &nbsp; &nbsp;  &nbsp; &nbsp;  &nbsp; unstable: [6&clubs;, 9&spades;,  3&diams;, 6&hearts;] &rarr; [3&diams;, 6&hearts;, 6&clubs;, 9&spades;] 

&nbsp;  &nbsp; &nbsp;  &nbsp; &nbsp;  &nbsp; stable: [6&clubs;, 9&spades;,  3&diams;, 6&hearts;] &rarr; [3&diams;, 6&clubs;, 6&hearts;, 9&spades;] 

- internal (RAM) or external (secondary memory) 
- recursive or non-recursive

&nbsp;  &nbsp; &nbsp;  &nbsp; &nbsp;  &nbsp; recursive: merge, quick
&nbsp;  &nbsp; &nbsp;  &nbsp; &nbsp;  &nbsp; non-recursive: insertion, selection

## Selection Sort

### Intuition

Imagine you have the following set of cards: [9&spades;, 6&spades;, 3&diams;, 4&spades;]

The basic idea of selection sort is splitting virtually this set into two hands, left and right.
Left hand has the unsorted subset of cards, and right hand will have the sorted subset of cards.
What we have to do is chose the smaller card and place at the end of the right hand.

1. LH: [9&spades;, 6&spades;, 3&diams;, 4&spades;] &nbsp;  &nbsp; &nbsp;  &nbsp; RH: []
2. LH: [9&spades;, 6&spades;, 4&spades;] &nbsp;  &nbsp; &nbsp;  &nbsp; RH: [3&diams;]
3. LH: [9&spades;, 6&spades;] &nbsp;  &nbsp; &nbsp;  &nbsp; RH: [3&diams;, 4&spades;]
4. LH: [9&spades;] &nbsp;  &nbsp; &nbsp;  &nbsp; RH: [3&diams;, 4&spades;, 6&spades;]
5. LH: [] &nbsp;  &nbsp; &nbsp;  &nbsp; RH: [3&diams;, 4&spades;, 6&spades;, 9&spades;]

The easiest way is doing out-of-place.
You can create two arrays, and the lower value from the left array is copied to the right array.
In the left array, we could replace the value copied with the maximum value of the programming language.
On the end, left array could be discarded, and right array would be returned.
This would occur as follows:
1. LH: [9, 6, 3, 4] &nbsp;  &nbsp; &nbsp;  &nbsp; RH: []
2. LH: [9, 6, **MAX**, 4] &nbsp;  &nbsp; &nbsp;  &nbsp; RH: [**3**]
3. LH: [9, 6, MAX, **MAX**] &nbsp;  &nbsp; &nbsp;  &nbsp; RH: [3, **4**]
4. LH: [9, **MAX**, MAX, MAX] &nbsp;  &nbsp; &nbsp;  &nbsp; RH: [3, 4, **6**]
5. LH: [**MAX**, MAX, MAX, MAX] &nbsp;  &nbsp; &nbsp;  &nbsp; RH: [3, 4, 6, 9]

However, we can create an in-place selection sort, by using the original array.
This could be done by searching the lower value and placing it on the beginning of array.
But first, the value on the beginning of the array should be stored on a local variable, and the put back to the array in the place where the lower value came from.
Obviously, the next values need to be placed after the already sorted array (we will need an index to control this)
This would occur as follows:
1. [2, 7, 4, *1*, 5, 3] &rarr; [**1**, 7, 4, 2, 5, 3]
2. [**1**, 7, 4, *2*, 5, 3] &rarr; [**1, 2**, 4, 7, 5, 3]
3. [**1, 2**, 4, 7, 5, *3*] &rarr; [**1, 2, 3**, 7, 5, 4]
4. [**1, 2, 3**, 7, 5, *4*] &rarr; [**1, 2, 3, 4**, 5, 7]
5. [**1, 2, 3, 4**, *5*, 7] &rarr; [**1, 2, 3, 4, 5**, 7]
6. [**1, 2, 3, 4, 5**, *7*] &rarr; [**1, 2, 3, 4, 5, 7**]

### Code
