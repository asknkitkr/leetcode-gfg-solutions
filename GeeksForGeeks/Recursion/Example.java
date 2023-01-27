public class Example {
    static void fun1() {
        System.out.println("This is fun1");
    }

    static void fun2() {
        System.out.println("This is fun2 - 1");
        fun1();
        System.out.println("This is fun2 - 2");
    }

    public static void main(String[] args) {
        System.out.println("Before fun2");
        fun2();
        System.out.println("After fun2");
    }
}
