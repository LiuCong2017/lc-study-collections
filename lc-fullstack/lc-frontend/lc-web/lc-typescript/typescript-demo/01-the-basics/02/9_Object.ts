//1 对象解构
let person = {
    name: "Semlinker",
    gender: "Male",
};
let { name, gender } = person;

//2 对象展开运算符
let person = {
    name: "Semlinker",
    gender: "Male",
    address: "Xiamen",
};
// 组装对象
let personWithAge = { ...person, age: 33 };
// 获取除了某些项外的其它项
let { name, ...rest } = person;
