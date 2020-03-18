# Algorithms and Data Structures

[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![MIT License][license-shield]][license-url]
[![LinkedIn][linkedin-shield]][linkedin-url]

> Keywords: `algorithms`, `data structures`, `sorting`,`graphs`, `strings`, `big o`

<!-- TABLE OF CONTENTS -->
## Table of Contents

- [Sorting Algorithms](#sorting-algorithms)
  - [Bubble Sort](#bubble-sort)
  - [Bucket Sort](#bucket-sort)
  - [Counting Sort](#counting-sort)
  - [Heap Sort](#heap-sort)
  - [Insertion Sort](#insertion-sort)
  - [Merge Sort](#merge-sort)
  - [Quick Sort](#quick-sort)
  - [Radix Sort](#radix-sort)
  - [Selection Sort](#selection-sort)
  - [Shell Sort](#shell-sort)
  - [Tim Sort](#bucket-sort)
- [Contact](#contact)
- [License](#license)

## Sorting Algorithms

### Bubble Sort

![bubble sort gif](img/bubble_sort.gif)
[View Code](https://github.com/marcosmapl/algorithms-data-structures/blob/master/sorting/bubble_sort.c)

`Bubble Sort` (sometimes called `siking sort`), is an __simple__ sorting algorithm that repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order. It has an __O(n<sup>2</sup>)__ time complexity, which makes it __inefficient on large collections__, and generally performs __poorly__ in real world use and is used primarily as an __educational tool__.

`Bubble Sort` is one of the __simplest sorting algorithms__ to understand and implement, its __O(n<sup>2</sup>)__ complexity means that its efficiency decreases dramatically on lists of more than a small number of elements. Even among simple __O(n<sup>2</sup>)__ sorting algorithms, algorithms like `Insertion Sort` are usually considerably more efficient.

> Property | Description
> ---  | ---
> Data Structure  | __Array__
> Stable  | __Yes__
> Worst-case performance | __O(n<sup>2</sup>) comparisons__ <br /> __O(n<sup>2</sup>) swaps__
> Best-case performance | __O(n) comparisons__ <br /> __O(n) swaps__ (if we keep track of swaps)
> Average performance  | __O(n<sup>2</sup>) comparisons__ <br /> __O(n<sup>2</sup>) swaps__
> Worst-case space complexity  | __O(1) auxiliary__

### Bucket Sort

...

### Counting Sort

...

### Heap Sort

...

### Insertion Sort

![insertion sort gif](img/insertion_sort.gif)
[View Code](https://github.com/marcosmapl/algorithms-data-structures/blob/master/sorting/insertion_sort.c)

`Insertion Sort` is a simple __in-place__ sorting algorithm that builds the final sorted array __one item at a time__. It is much __less efficient on large lists__ than more advanced algorithms such as `Quicksort`, `Heapsort`, or `Merge Sort`. However, `Insertion Sort` provides several advantages:

- __Simple implementation__: Jon Bentley shows a three-line C version, and a five-line optimized version.
- __Efficient for (quite) small data sets__, much like other quadratic sorting algorithms
- __More efficient in practice__ than most other simple quadratic (i.e., __O(n<sup>2</sup>)__) algorithms such as `Selection Sort` or `Bubble Sort`.
- __Adaptive__, i.e., efficient for data sets that are __already substantially sorted__: the time complexity is __O(kn)__ when each element in the input is no more than __k places away from its sorted position__.

> Property | Description
> ---  | ---
> Data Structure  | __Array__
> Stable  | __Yes__
> Worst-case performance | __O(n<sup>2</sup>) comparisons__ <br /> __O(n<sup>2</sup>) swaps__
> Best-case performance | __O(n) comparisons__ <br /> __O(1) swaps__
> Average performance  | __O(n<sup>2</sup>) comparisons__ <br /> __O(n<sup>2</sup>) swaps__
> Worst-case space complexity  | __O(n) total__, __O(1) auxiliary__

### Merge Sort

![merge sort gif](img/merge_sort.gif)
[View Code](https://github.com/marcosmapl/algorithms-data-structures/blob/master/sorting/merge_sort.c)

`Merge Sort` is an __efficient__, __general-purpose__, __comparison-based__ sorting algorithm. Most implementations produce a __stable sort__, which means that the order of equal elements is the same in the input and output.

`Merge sort` is a __divide and conquer__ algorithm that was invented by John von Neumann in 1945. A detailed description and analysis of bottom-up mergesort appeared in a report by Goldstine and von Neumann as early as 1948.

Conceptually, a merge sort works as follows:

- Divide the unsorted list into n sublists, each containing one element (a list of one element is considered sorted).
- Repeatedly merge sublists to produce new sorted sublists until there is only one sublist remaining. This will be the sorted list.

> Property | Description
> ---  | ---
> Data Structure  | __Array__
> Stable  | __Yes__
> Worst-case performance | __O(n _log_ n) typical__
> Best-case performance | __O(n _log_ n) typical__ <br> __O(n _log_ n) natural variant__
> Average performance  | __O(n _log_ n)__
> Worst-case space complexity  | __O(n) total with O(n) auxiliary, <br> O(1) auxiliary with linked lists__

### Quick Sort

![quick sort gif](img/quick_sort.gif)
[View Code](https://github.com/marcosmapl/algorithms-data-structures/blob/master/sorting/quick_sort.c)

`Quicksort` (sometimes called __partition-exchange sort__) is an efficient sorting algorithm. Developed by British computer scientist Tony Hoare in 1959 and published in 1961, it is still a commonly used algorithm for sorting. When implemented well, it can be about __two or three times faster__ than its main competitors, `Merge Sort` and `Heapsort`.

`Quicksort` is a __divide-and-conquer algorithm__. It works by selecting a __pivot__ element from the array and __partitioning the other elements into two sub-arrays__, according to whether they are __less than__ or __greater than__ the __pivot__. The sub-arrays are then __sorted recursively__. This can be done __in-place__, requiring small additional amounts of memory to perform the sorting.

`Quicksort` is a __comparison sort__, meaning that it can sort items of any type for which a __less-than__ relation (formally, a total order) is defined. Efficient implementations of `Quicksort` are __not a stable sort__, meaning that the relative order of equal sort items is not preserved.

> Property | Description
> ---  | ---
> Data Structure  | __Array__
> Stable  | __No__
> Worst-case performance | __O(n<sup>2</sup>)__
> Best-case performance | __O(n log n) simple partition__ <br /> __O(n) three-way partition on equal key__
> Average performance  | __O(n log n)__
> Worst-case space complexity  | __O(n) naive__ <br /> __O(log n) auxiliary (Sedgewick 1978)__

### Radix Sort

...

### Selection Sort

![seleciton sort gif](img/selection_sort.gif)
[View Code](https://github.com/marcosmapl/algorithms-data-structures/blob/master/sorting/selection_sort.c)

`Selection Sort` is an __in-place__ comparison sorting algorithm. It has an __O(n<sup>2</sup>)__ time complexity, which makes it __inefficient on large collections__, and generally performs __worse__ than the similar `Insertion Sort`.

`Selection Sort` is noted for its __simplicity__ and has performance advantages over more complicated algorithms in certain situations, particularly where __auxiliary memory is limited__.

The algorithm divides the input list into two parts: a sorted sublist of items which is built up from __left to right__ at the __front (left)__ of the list and a sublist of the __remaining unsorted items__ that occupy the rest of the list. Initially, the sorted sublist is empty and the unsorted sublist is the entire input list. The algorithm proceeds by __finding the smallest__ (or *largest*, depending on sorting order) element in the unsorted sublist, __exchanging (swapping) it with the leftmost unsorted element__ (putting it in sorted order), and moving the sublist boundaries one element to the right.

The time efficiency of `Selection Sort` is __quadratic__, so there are a number of sorting techniques which have better time complexity than `Selection Sort`. One thing which distinguishes `Selection Sort` from other sorting algorithms is that __it makes the minimum possible number of swaps, n − 1 in the worst case__.

> Property | Description
> ---  | ---
> Data Structure  | __Array__
> Stable  | __No__
> Worst-case performance | __O(n<sup>2</sup>) comparisons__ <br /> __O(n) swaps__
> Best-case performance | __O(n<sup>2</sup>) comparisons__ <br /> __O(n) swaps__
> Average performance  | __O(n<sup>2</sup>) comparisons__ <br /> __O(n) swaps__
> Worst-case space complexity  | __O(1)__

### Shell Sort

...

### Tim Sort

...

## Contact

Marcos Lima [![LinkedIn][linkedin-shield]][linkedin-url]

marcos.lima@icomp.ufam.edu.br

[See my project on GitHub](https://github.com/marcosmapl/algorithms-data-structures/)


## License

- **[GNU General Public License v3.0](https://www.gnu.org/licenses/gpl-3.0.html)** [![GNU GPL v3](https://img.shields.io/badge/License-GPLv3-blue.svg)](https://www.gnu.org/licenses/gpl-3.0)
- Copyright 2020 © [marcosmapl](https://github.com/marcosmapl).

<!-- Markdown link & img dfn's -->
[wiki]: https://github.com/marcosmapl/algorithms-data-structures/wiki
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=flat-square&logo=linkedin&colorB=555
[linkedin-url]: https://linkedin.com/in/marcosmapl
[contributors-shield]: https://img.shields.io/github/contributors/marcosmapl/algorithms-data-structures.svg?style=flat-square
[contributors-url]: https://github.com/marcosmapl/algorithms-data-structures/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/marcosmapl/algorithms-data-structures.svg?style=flat-square
[forks-url]: https://github.com/marcosmapl/algorithms-data-structures/network/members
[stars-shield]: https://img.shields.io/github/stars/marcosmapl/algorithms-data-structures.svg?style=flat-square
[stars-url]: https://github.com/marcosmapl/algorithms-data-structures/stargazers
[issues-shield]: https://img.shields.io/github/issues/marcosmapl/algorithms-data-structures.svg?style=flat-square
[issues-url]: https://github.com/marcosmapl/algorithms-data-structures/issues
[license-shield]: https://img.shields.io/github/license/marcosmapl/algorithms-data-structures.svg?style=flat-square
[license-url]: https://github.com/marcosmapl/algorithms-data-structures/blob/master/LICENSE
