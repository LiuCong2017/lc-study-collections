//1 对象的形状
interface Person {
    name: string;
    age: number;
}

let Semlinker: Person = {
    name: "Semlinker",
    age: 33,
};

//2 可选 | 只读属性
interface Person {
    readonly name: string;
    age?: number;
}

let a: number[] = [1, 2, 3, 4];
//ReadonlyArray<T> 类型 - 确保数组创建后再也不能被修改
let ro: ReadonlyArray<number> = a;
ro[0] = 12; // error!
ro.push(5); // error!
ro.length = 100; // error!
a = ro; // error!
