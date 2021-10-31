/*
Given x and y are numbers,
how many times can you multiply y and keep it lower than or equal to x?
*/

multiplierCount = (x, y) => {
    return Math.floor(x / y);
};

console.assert(multiplierCount(134, 2) === 67)
console.assert(multiplierCount(1, 3) === 0)
console.assert(multiplierCount(123, 12) === 10)
console.assert(multiplierCount(120, 12) === 10)
console.assert(multiplierCount(119, 12) === 9)
