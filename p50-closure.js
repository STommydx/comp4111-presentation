function rand() {
	var x = Math.random();
	return l => r => l + (r - l) * x;
}

var myRand = rand(); // construct a new random
console.log(myRand(0)(2));
console.log(myRand(50)(70));
var myRand2 = rand(); // construct another random
console.log(myRand2(0)(2));
console.log(myRand2(50)(70));

// vim: ts=4 sw=4
