# Algorithms and Data Structures

[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![MIT License][license-shield]][license-url]
[![LinkedIn][linkedin-shield]][linkedin-url]

> Algorithms and Data Structures Study Repository.

> Keywords: `algorithms`, `data structures`, `sorting`,`graphs`, `strings`, `big o`

<!-- TABLE OF CONTENTS -->
## Table of Contents
  - [Sorting Algorithms](#sorting-algorithms)
    - [Selection Sort](#selection-sort)
    - [Bubble Sort](#bubble-sort)
    - [Insertion Sort](#insertion-sort)
  - [Contact](#contact)
  - [License](#license)


## Sorting Algorithms

### Selection Sort

![](img/selection_sort.gif)
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

### Bubble Sort

![](img/bubble_sort.gif)
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

### Insertion Sort

![](img/insertion_sort.gif)
[View Code](https://github.com/marcosmapl/algorithms-data-structures/blob/master/sorting/insertion_sort.c)

`Insertion Sort` is a simple __in-place__ sorting algorithm that builds the final sorted array __one item at a time__. It is much __less efficient on large lists__ than more advanced algorithms such as `Quicksort`, `Heapsort`, or `Merge Sort`. However, `Insertion Sort` provides several advantages:
- __Simple implementation__: Jon Bentley shows a three-line C version, and a five-line optimized version.
- __Efficient for (quite) small data sets__, much like other quadratic sorting algorithms
- __More efficient in practice__ than most other simple quadratic (i.e., O(n2)) algorithms such as `Selection Sort` or `Bubble Sort`.
- __Adaptive__, i.e., efficient for data sets that are __already substantially sorted__: the time complexity is O(kn) when each element in the input is no more than __k places away from its sorted position__.

> Property | Description
> ---  | ---
> Data Structure  | __Array__
> Stable  | __Yes__
> Worst-case performance | __O(n<sup>2</sup>) comparisons__ <br /> __O(n<sup>2</sup>) swaps__
> Best-case performance | __O(n) comparisons__ <br /> __O(1) swaps__
> Average performance  | __O(n<sup>2</sup>) comparisons__ <br /> __O(n<sup>2</sup>) swaps__
> Worst-case space complexity  | __O(n) total__, __O(1) auxiliary__

## Contact

Marcos Lima  – marcos.lima@icomp.ufam.edu.br

[![LinkedIn][linkedin-shield]][linkedin-url]

[See my project on GitHub](https://github.com/marcosmapl/algorithms-data-structures/)

## License

[![GNU GPL v3](https://img.shields.io/badge/License-GPLv3-blue.svg)](https://www.gnu.org/licenses/gpl-3.0)

- **[GNU General Public License v3.0](https://www.gnu.org/licenses/gpl-3.0.html)**	
- Copyright 2020 © <a href="https://www.linkedin.com/in/marcosmapl" target="_blank">marcosmapl</a>.

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
