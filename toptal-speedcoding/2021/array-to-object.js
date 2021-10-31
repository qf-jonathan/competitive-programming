/*
Given x is an array where every item has 2 values [key, value],
convert every array item to an object given the key and value.
*/

utils = require('../utils');

arrayToObject = (x) => {
    let obj = {};
    for (let e in x) {
        obj[x[e][0]] = x[e][1];
    }
    return obj;
};

console.assert(utils.shallowEqual(arrayToObject([['key', 'value']]), {key: 'value'}));
console.assert(utils.shallowEqual(arrayToObject([['key', 'value'], ['other-key', 'other-value']]), {key: 'value', 'other-key': 'other-value'}));
console.assert(utils.shallowEqual(arrayToObject([['one', 1], ['two', 2], ['three', 3]]), {one: 1, two: 2, three: 3}));
console.assert(utils.shallowEqual(arrayToObject([]), {}));
