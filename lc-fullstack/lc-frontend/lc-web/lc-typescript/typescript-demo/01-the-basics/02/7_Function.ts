// - 参数类型和返回类型
function createUserId(name: string, id: number): string {
    return name + id;
}

// -  函数类型
let IdGenerator: (chars: string, nums: number) => string;

function createUserId(name: string, id: number): string {
    return name + id;
}

IdGenerator = createUserId;

// - 可选参数及默认参数
// 可选参数 - 注意可选参数要放在普通参数的后面，不然会导致编译错误
function createUserId(name: string, id: number, age?: number): string {
    return name + id;
}
// 默认参数
function createUserId(
    name: string = "Semlinker",
    id: number,
    age?: number
): string {
    return name + id;
}

// - 剩余参数
function push(array, ...items) {
    items.forEach(function (item) {
        array.push(item);
    });
}

let a = [];
push(a, 1, 2, 3);

// - 函数重载
function add(a: number, b: number): number;
function add(a: string, b: string): string;
function add(a: string, b: number): string;
function add(a: number, b: string): string;
function add(a: Combinable, b: Combinable) {
    if (typeof a === "string" || typeof b === "string") {
        return a.toString() + b.toString();
    }
    return a + b;
}

//成员方法重载的例子
class Calculator {
    add(a: number, b: number): number;
    add(a: string, b: string): string;
    add(a: string, b: number): string;
    add(a: number, b: string): string;
    add(a: Combinable, b: Combinable) {
        if (typeof a === "string" || typeof b === "string") {
            return a.toString() + b.toString();
        }
        return a + b;
    }
}
const calculator = new Calculator();
const result = calculator.add("Semlinker", " Kakuqo");