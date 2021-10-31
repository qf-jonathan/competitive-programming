/*
Given x is a variable of a random type,
return the data type of x.
*/

getType = (x) => {
    return typeof(x);
};

console.assert(getType('123') === 'string');
console.assert(getType(123) === 'number');
console.assert(getType({}) === 'object');
