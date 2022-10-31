/**
 * 装饰器是什么
 * 它是一个表达式
 * 该表达式被执行后，返回一个函数
 * 函数的入参分别为 target、name 和 descriptor
 * 执行该函数后，可能返回 descriptor 对象，用于配置 target 对象
 *
 * 装饰器的分类
 * 类装饰器（Class decorators）
 * 属性装饰器（Property decorators）
 * 方法装饰器（Method decorators）
 * 参数装饰器（Parameter decorators）
 */

/**
 * 1.  类装饰器
 * 类装饰器顾名思义，就是用来装饰类的。
 * 它接收一个参数：target: TFunction - 被装饰的类
 */
//类装饰器声明
declare type ClassDecorator = <TFunction extends Function>(
    target: TFunction
) => TFunction | void;

// - 例子
//定义 Greeter 类装饰器
function Greeter(target: Function): void {
    target.prototype.greet = function (): void {
        console.log("Hello Semlinker!");
    };
}
//使用 @Greeter 语法糖，来使用装饰器
@Greeter
class Greeting {
    constructor() {
        // 内部实现
    }
}
let myGreeting = new Greeting();
myGreeting.greet(); // console output: 'Hello Semlinker!';

// - 自定义输出问候语
function Greeter(greeting: string) {
    return function (target: Function) {
        target.prototype.greet = function (): void {
            console.log(greeting);
        };
    };
}
@Greeter("Hello TS!")
class Greeting {
    constructor() {
        // 内部实现
    }
}
let myGreeting = new Greeting();
myGreeting.greet(); // console output: 'Hello TS!';

/**
 *  2. 属性装饰器
 *
 *  属性装饰器用来装饰类的属性。它接收两个参数：
 * target: Object - 被装饰的类
 * propertyKey: string | symbol - 被装饰类的属性名
 */
// 属性装饰器声明：
declare type PropertyDecorator = (target:Object, propertyKey: string | symbol ) => void;

// - 例子
//定义了一个 logProperty 函数，来跟踪用户对属性的操作
function logProperty(target: any, key: string) {
    delete target[key];

    const backingField = "_" + key;

    Object.defineProperty(target, backingField, {
        writable: true,
        enumerable: true,
        configurable: true
    });

    // property getter
    const getter = function (this: any) {
        const currVal = this[backingField];
        console.log(`Get: ${key} => ${currVal}`);
        return currVal;
    };

    // property setter
    const setter = function (this: any, newVal: any) {
        console.log(`Set: ${key} => ${newVal}`);
        this[backingField] = newVal;
    };

    // Create new property with getter and setter
    Object.defineProperty(target, key, {
        get: getter,
        set: setter,
        enumerable: true,
        configurable: true
    });
}

class Person {
    @logProperty
    public name: string;

    constructor(name : string) {
        this.name = name;
    }
}

const p1 = new Person("semlinker");
p1.name = "kakuqo";
//输出：
// Set: name => semlinker
// Set: name => kakuqo

/**
 * 3. 方法装饰器
 *
 * 方法装饰器用来装饰类的方法。它接收三个参数：
 * target: Object - 被装饰的类
 * propertyKey: string | symbol - 方法名
 * descriptor: TypePropertyDescript - 属性描述符
 */
// 方法装饰器声明：
declare type MethodDecorator = <T>(target:Object, propertyKey: string | symbol, descriptor: TypePropertyDescript<T>) => TypedPropertyDescriptor<T> | void;

// - 例子
function LogOutput(tarage: Function, key: string, descriptor: any) {
    let originalMethod = descriptor.value;
    let newMethod = function(...args: any[]): any {
        let result: any = originalMethod.apply(this, args);
        if(!this.loggedOutput) {
            this.loggedOutput = new Array<any>();
        }
        this.loggedOutput.push({
            method: key,
            parameters: args,
            output: result,
            timestamp: new Date()
        });
        return result;
    };
    descriptor.value = newMethod;
}

class Calculator {
    @LogOutput
    double (num: number): number {
        return num * 2;
    }
}

let calc = new Calculator();
calc.double(11);
// console ouput: [{method: "double", output: 22, ...}]
console.log(calc.loggedOutput);
































