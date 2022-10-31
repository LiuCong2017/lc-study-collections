let isDone: boolean = false;
// ES5：var isDone = false;

let count: number = 10;
// ES5：var count = 10;

let str: string = "Semliker";
// ES5：var name = 'Semlinker';

/**
 * Array
 */
// let list: number[] = [1, 2, 3];
// ES5：var list = [1,2,3];

let list: Array<number> = [1, 2, 3]; // Array<number>泛型语法
// ES5：var list = [1,2,3];

/**
 * Enum
 */
enum Direction {
    NORTH,
    SOUTH,
    EAST,
    WEST,
}
let dir: Direction = Direction.NORTH;

// enum Direction {
//     NORTH = "NORTH",
//     SOUTH = "SOUTH",
//     EAST = "EAST",
//     WEST = "WEST",
// }

enum Enum {
    A,
    B,
    C = "C",
    D = "D",
    E = 8,
    F,
}

console.log(Enum.A) //输出：0
console.log(Enum[0]) // 输出：A

/**
 * Any
 */
let notSure: any = 666;
notSure = "Semlinker";
notSure = false;

let value: any;

value.foo.bar; // OK
value.trim(); // OK
value(); // OK
new value(); // OK
value[0][1]; // OK

/**
 * Unknown
 */
let value: unknown;

value = true; // OK
value = 42; // OK
value = "Hello World"; // OK
value = []; // OK
value = {}; // OK
value = Math.random; // OK
value = null; // OK
value = undefined; // OK
value = new TypeError(); // OK
value = Symbol("type"); // OK

let value1: unknown = value; // OK
let value2: any = value; // OK
let value3: boolean = value; // Error
let value4: number = value; // Error
let value5: string = value; // Error
let value6: object = value; // Error
let value7: any[] = value; // Error
let value8: Function = value; // Error

/**
 * Tuple
 */
let tupleType: [string, boolean];
tupleType = ["Semlinker", true];

console.log(tupleType[0]); // Semlinker
console.log(tupleType[1]); // true

/**
 * Void
 */
// 声明函数返回值为void
function warnUser(): void {
    console.log("This is my warning message");
}

/**
 *  Null 和 Undefined
 */
let u: undefined = undefined;
let n: null = null;

/**
 * Never
 */
// 返回never的函数必须存在无法达到的终点
function error(message: string): never {
    throw new Error(message);
}

function infiniteLoop(): never {
    while (true) {}
}

//利用 never 类型的特性来实现全面性检查
//使用 never 避免出现新增了联合类型没有对应的实现，目的就是写出类型绝对安全的代码。
type Foo = string | number;
function controlFlowAnalysisWithNever(foo: Foo) {
    if (typeof foo === "string") {
        // 这里 foo 被收窄为 string 类型
    } else if (typeof foo === "number") {
        // 这里 foo 被收窄为 number 类型
    } else {
        // foo 在这里是 never
        const check: never = foo;
    }
}

























