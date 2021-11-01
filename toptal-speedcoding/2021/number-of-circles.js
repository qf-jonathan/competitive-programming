/*
Given x is a number,
some digits have circles in their design (ex. 6, 9, 0 has one circle and 8 has two circles).Count all circles of a given number.
*/

numberOfCircles = (x) => {
    return ('' + Math.abs(x)).split('').reduce((a, b) => a + [1, 0, 0, 0, 0, 0, 1, 0, 2, 1][b * 1], 0);
};

console.assert(numberOfCircles(1908) === 4);
console.assert(numberOfCircles(9) === 1);
console.assert(numberOfCircles(1000) === 3);
console.assert(numberOfCircles(1234567890) === 5);
