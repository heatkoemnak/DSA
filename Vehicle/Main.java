public class Main {
    public static void main(String[] args) {
        Vehicle vehicle = new Vehicle("Ford", "F-150", 2018, 35000.0);
        Car car = new Car("Toyota", "Camry", 2021, 28000.0, 5);

        System.out.println("Vehicle Details:\n" + vehicle.toString() + "\n");
        System.out.println("Car Details:\n" + car.toString());
    }
}
