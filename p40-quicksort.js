var mysort = x => x.length > 1 ?
             mysort(x.filter(z => z < x[0]))
               .concat(x.filter(z => z == x[0]))
               .concat(mysort(x.filter(z => z > x[0]))) :
             x;

console.log(mysort([5, 6, 3, 1, 2, 3, 4, 7]));

var randArr = Array(1000000).fill().map(x => Math.random());
console.log(mysort(randArr).slice(0, 5));
