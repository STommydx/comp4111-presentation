var fp = require('lodash/fp');
var action = fp.compose([
	fp.reduce((x, y) => (x + y) % 7)(0),
	fp.filter(x => x > 4),
	fp.map(x => x * x)
]);
console.log(action([2, 3, 5])); // 6
console.log(action([1, 2, 7])); // 0

// vim: ts=4 sw=4
