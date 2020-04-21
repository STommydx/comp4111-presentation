var calc = {
    add: x => y => x + y,
    minus: x => y => x - y,
    mult: x => y => x * y
};

for (let [k, v] of Object.entries(calc))
    console.log(`${k}: ${v(3)(5)}`);
