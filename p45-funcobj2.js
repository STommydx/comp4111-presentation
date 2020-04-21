var vec = [x => x + 1, x => x * 2, x => x - 6];
console.log(vec.reduce((f, g) => x => g(f(x)))(3)); // 2
