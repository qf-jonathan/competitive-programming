/*
Given x is an array,
return half of the array (if elements count is odd, include the middle one).
*/

getHalfArray = (x) => {
    return x.slice(0, (x.length + 1) / 2);
};

console.assert(getHalfArray([1, 2, 3]).join() === [1, 2].join());
console.assert(getHalfArray([1, 2, 3, 4]).join() === [1, 2].join());
console.assert(getHalfArray([50, 4, 1]).join() === [50, 4].join());
console.assert(getHalfArray([2]).join() === [2].join());
