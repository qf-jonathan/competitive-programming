/*
Given x and y are random data types,
return true if x and y are the same data type.
*/

matchingType = (x, y) => {
    return typeof(x) === typeof(y);
};

console.assert(matchingType(1, '1') === false);
console.assert(matchingType(2, 4));
console.assert(matchingType('toptal', 7) === false);
