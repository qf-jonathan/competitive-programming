/*
Given x is an array of strings,
sort x in descending order (alphabetically from Z to A).
*/

sortArrayDesc = (x) => {
    return x.sort().reverse();
};

console.assert(sortArrayDesc(['a', 'b', 'c']).join() === ['c', 'b', 'a'].join());
console.assert(sortArrayDesc(['a', 'b', 'c', 'd']).join() === ['d', 'c', 'b', 'a'].join());
console.assert(sortArrayDesc(['gh', 'rf', 'ty', 'aa']).join() === ['ty', 'rf', 'gh', 'aa'].join());
