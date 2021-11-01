/*
Given x is a string,
reverse the case of the letters in the string and return the updated string.
*/

reverseCase = (x) => {
    return x.split('').map((e) => e == e.toUpperCase() ? e.toLowerCase() : e.toUpperCase()).join('');
};

console.assert(reverseCase('Toptal') === 'tOPTAL');
console.assert(reverseCase('SpEeDcoDiNg') === 'sPeEdCOdInG');
