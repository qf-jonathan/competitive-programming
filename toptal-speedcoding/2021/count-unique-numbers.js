/*
Given x is an array,
find the count of unique numbers in x.
*/

countUniqueNumbers = (x) => {
    return (new Set(x)).size;
};

console.assert(countUniqueNumbers([1,2,3]) === 3);
console.assert(countUniqueNumbers([1,2,2,2,3,4,20,3]) === 5);
console.assert(countUniqueNumbers([4,8,-1,-1,6,4]) === 4);
console.assert(countUniqueNumbers([12]) === 1);
