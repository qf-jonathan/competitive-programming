/*
Given x is an array of numbers,
every number in x is duplicated except for one number.Return that unique number.
*/

findUniqueNumber = (x) => {
    return x.reduce((a, b) => a ^ b, 0);
};

console.assert(findUniqueNumber([1,1,2,4,2,4,3]), 3);
console.assert(findUniqueNumber([7]), 7);
console.assert(findUniqueNumber([7,7,8,8,9,9,10]), 10);
console.assert(findUniqueNumber([1,2,1,4,2]), 4);
console.assert(findUniqueNumber([2,-1,2,-1,7,9,7]), 9);
