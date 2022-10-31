//1 数组解构
let x: number; let y: number; let z: number;
let five_array = [0,1,2,3,4];
[x,y,z] = five_array;

//2 数组展开运算符
let two_array = [0, 1];
let five_array = [...two_array, 2, 3, 4];

//3 数组遍历
let colors: string[] = ["red", "green", "blue"];
for (let i of colors) {
    console.log(i);
}
