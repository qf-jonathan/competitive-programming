/*
Given x is a string,
reverse all words in the string x letter by letter while keeping the word order the same.
*/

reverseAllWords = (x) => {
    return x.split(' ').map((e) => e.split('').reverse().join('')).join(' ');
};

console.assert(reverseAllWords('Hello from Toptal') === 'olleH morf latpoT');
console.assert(reverseAllWords('abc cba') === 'cba abc');
console.assert(reverseAllWords('hello') === 'olleh');
console.assert(reverseAllWords('elle') === 'elle');
