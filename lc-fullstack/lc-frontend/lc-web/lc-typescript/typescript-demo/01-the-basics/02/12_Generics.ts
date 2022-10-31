//泛型
/**
 * 1 泛型接口
 */
interface GenericIdentityFn<T> {
    (arg: T): T;
}

/**
 * 2 泛型类
 */
class GenericNumber<T> {
    zeroValue: T;
    add: (x: T, y: T) => T;
}

let myGenericNumber = new GenericNumber<number>();
myGenericNumber.zeroValue = 0;
myGenericNumber.add = function (x, y) {
    return x + y;
};

/**
 * 3 泛型变量
 * T（Type）：表示一个 TypeScript 类型
 * K（Key）：表示对象中的键类型
 * V（Value）：表示对象中的值类型
 * E（Element）：表示元素类型
 */

/**
 * 4 泛型工具类型
 */
// - typeof 获取一个变量声明或对象的类型
interface Person {
    name: string;
    age: number;
}
const sem: Person = { name: 'semlinker', age: 30 };
type Sem= typeof sem; // -> Person

function toArray(x: number): Array<number> {
    return [x];
}
type Func = typeof toArray; // -> (x: number) => number[]

// - keyof 获取对象中的所有 key 值
interface Person {
    name: string;
    age: number;
}
type K1 = keyof Person; // "name" | "age"
type K2 = keyof Person[]; // "length" | "toString" | "pop" | "push" | "concat" | "join"
type K3 = keyof { [x: string]: Person };  // string | number

// - in 遍历枚举类型
type Keys = "a" | "b" | "c"
type Obj =  {
    [p in Keys]: any
} // -> { a: any, b: any, c: any }

// - infer 在条件类型语句中,用来声明一个类型变量并且对它进行使用
type ReturnType<T> = T extends (
    ...args: any[]
) => infer R ? R : any; //取到函数返回值的类型方便之后使用

// - extends 添加泛型约束
interface ILengthwise {
    length: number;
}
function loggingIdentity<T extends ILengthwise>(arg: T): T {
    console.log(arg.length);
    return arg;
}
//泛型函数被定义了约束，因此它不再是适用于任意类型
loggingIdentity(3); // Error, number doesn't have a .length property
//需要传入符合约束类型的值，必须包含必须的属性
loggingIdentity({length: 10, value: 3});

// - Partial 将某个类型里的属性全部变为可选项 ?
/**
 * node_modules/typescript/lib/lib.es5.d.ts
 * Make all properties in T optional
 *
 * 首先通过 keyof T 拿到 T 的所有属性名，然后使用 in 进行遍历，将值赋给 P，最后通过 T[P] 取得相应的属性值。中间的 ? 号，用于将所有属性变为可选
 */
type Partial<T> = {
    [P in keyof T]?: T[P];
};

//示例
interface Todo {
    title: string;
    description: string;
}
function updateTodo(todo: Todo, fieldsToUpdate: Partial<Todo>) {
    return { ...todo, ...fieldsToUpdate };
}
const todo1 = {
    title: "organize desk",
    description: "clear clutter",
};

const todo2 = updateTodo(todo1, {
    //Partial:
    // {
    //     title?: string | undefined;
    //     description?: string | undefined;
    // }
    description: "throw out trash",
});




































