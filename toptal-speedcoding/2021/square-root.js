/*
Given x is a number,
find the square root of x.
*/

squareRoot = (x) => {
    return Math.sqrt(x);
};

console.assert(squareRoot(64).toFixed(3) === '8.000');
console.assert(squareRoot(7).toFixed(3) === '2.646');
console.assert(squareRoot(2).toFixed(3) === '1.414');
console.assert(squareRoot(27).toFixed(3) === '5.196');
