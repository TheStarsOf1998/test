public class Test {
    // public static void call() {
    //     int i = 0;
    // }
    public void foo(){
        String x = "old";
        bar();
        System.out.println(x);

    }
    public void bar(){
        String x = "new";
    }

    public static void main(String[] args) {
        //new Test().foo();
        Person<Integer> x = new Person<Integer>();
        x.something = 1;
        System.out.println(x.something);
}
        // Hello.show();
        // System.out.println("Ã¨ÂµÂµÃ¤Â¿Å ");
        // demo.Hello.show();
        // Hello h = new Hello();
        // h.test();
        // int[] items = new int[] { 1, 2, 3, 4, 5 };
        // for (int item : items) {
        // System.out.println(item);
        // }
//       for (int i = 0; i < 10; i++) {
//            Test.call();
//           System.out.println(i);
//       }
    }
}
class Person<T>{
    public Integer age;
    public String name;
    public T something;

}