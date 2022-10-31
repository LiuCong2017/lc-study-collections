/**
 * 1 类的属性与方法
 */
class Greeter {
    // 静态属性
    static cname: string = "Greeter";
    // 成员属性
    greeting: string;

    // 构造函数 - 执行初始化操作
    constructor(message: string) {
        this.greeting = message;
    }

    // 静态方法
    static getClassName() {
        return "Class name is Greeter";
    }

    // 成员方法
    greet() {
        return "Hello, " + this.greeting;
    }
}

let greeter = new Greeter("world");

/**
 * 2 访问器
 */
let passcode = "Hello TypeScript";

class Employee {
    private _fullName: string;

    get fullName(): string {
        return this._fullName;
    }

    set fullName(newName: string) {
        if (passcode && passcode == "Hello TypeScript") {
            this._fullName = newName;
        } else {
            console.log("Error: Unauthorized update of employee!");
        }
    }
}

let employee = new Employee();
employee.fullName = "Semlinker";
if (employee.fullName) {
    console.log(employee.fullName);
}

/**
 * 3 类的继承
 */
class Animal {
    name: string;

    constructor(theName: string) {
        this.name = theName;
    }

    move(distanceInMeters: number = 0) {
        console.log(`${this.name} moved ${distanceInMeters}m.`);
    }
}

class Snake extends Animal {
    constructor(name: string) {
        super(name);
    }

    move(distanceInMeters = 5) {
        console.log("Slithering...");
        super.move(distanceInMeters);
    }
}

let sam = new Snake("Sammy the Python");
sam.move();

/**
 * 4 ECMAScript 私有字段
 *
 * 私有字段要牢记以下规则：
 * 私有字段以 # 字符开头，有时我们称之为私有名称；
 * 每个私有字段名称都唯一地限定于其包含的类；
 * 不能在私有字段上使用 TypeScript 可访问性修饰符（如 public 或 private）；
 * 私有字段不能在包含的类之外访问，甚至不能被检测到。
 */
class Person {
    #name: string;

    constructor(name: string) {
        this.#name = name;
    }

    greet() {
        console.log(`Hello, my name is ${this.#name}!`);
    }
}

let semlinker = new Person("Semlinker");

semlinker.#name;
//     ~~~~~
// Property '#name' is not accessible outside class 'Person'
// because it has a private identifier.




























