function gen(init) {
	var n = init;
	return () => n = n + n;
}

var myPow = gen(3);
console.log(myPow());
console.log(myPow());
console.log(myPow());
console.log(myPow());

// vim: ts=4 sw=4
