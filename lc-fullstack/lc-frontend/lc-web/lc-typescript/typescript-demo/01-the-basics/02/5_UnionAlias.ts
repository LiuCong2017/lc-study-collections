/**
 * 联合类型和类型别名
 */

//(1)联合类型
const sayHello = (name: string | undefined) => {
    /* ... */
};
sayHello("Semlinker");
sayHello(undefined);

//(2)可辨识联合（Discriminated Unions）类型 - 可辨识、联合类型和类型守卫
// - 可辨识 - 可辨识要求联合类型中的每个元素都含有一个单例类型属性
enum CarTransmission {
    Automatic = 200,
    Manual = 300
}
//vType属性，该属性被称为可辨识的属性，而其它的属性只跟特性的接口相关
interface Motorcycle {
    vType: "motorcycle"; // discriminant
    make: number; // year
}
interface Car {
    vType: "car"; // discriminant
    transmission: CarTransmission
}
interface Truck {
    vType: "truck"; // discriminant
    capacity: number; // in tons
}
// - 联合类型
type Vehicle = Motorcycle | Car | Truck; //表示不同类型的车辆
// - 类型守卫
const EVALUATION_FACTOR = Math.PI;
//根据车辆的类型、容量和评估因子来计算价格
function evaluatePrice(vehicle: Vehicle) {
    switch(vehicle.vType) {
        case "car":
            return vehicle.transmission * EVALUATION_FACTOR;
        case "truck":
            return vehicle.capacity * EVALUATION_FACTOR;
        case "motorcycle":
            return vehicle.make * EVALUATION_FACTOR;
    }
}
const myTruck: Truck = { vType: "truck", capacity: 9.5 };
evaluatePrice(myTruck);

// - 类型别名
type Message = string | string[];

let greet = (message: Message) => {
    // ...
};


