/*
Given x is an array of numbers,
find the average of x and if it is not a whole number, round it up.
*/

findAverage = (x) => {
    return Math.ceil(x.reduce((a, e) => a + e, 0) / x.length);
};

console.assert(findAverage([1, 2, 3]) === 2);
console.assert(findAverage([2, 2, 3]) === 3);
console.assert(findAverage([4, 4, 4, 4, 3]) === 4);
console.assert(findAverage([-1, -3, 4, 5]) === 2);
