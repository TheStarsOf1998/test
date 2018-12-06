import java.util.List;
import java.util.ArrayList;
public class Person {
    public static void main(String[] args) {
        //new Zhao();
    }
}

class Boy extends Person {
    public Boy() {
        System.out.println("one boy  " + this.getClass());
    }
}

class Zhao extends Boy {
    public Zhao() {
        System.out.println("two this is zhao  " + this.getClass());
    }
}