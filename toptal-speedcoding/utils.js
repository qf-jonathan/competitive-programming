const shallowEqual = (objectA, objectB) => {
    const keysA = Object.keys(objectA);
    const keysB = Object.keys(objectB);

    if (keysA.length !== keysB.length) {
        return false;
    }

    for (let key of keysA) {
        if (objectA[key] !== objectB[key]) {
            return false;
        }
    }

    return true;
};

module.exports = {
    shallowEqual,
}
