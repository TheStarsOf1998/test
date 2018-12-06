import java.util.List;
import java.util.ArrayList;

public class Demo {

    public static void main(String[] args) {
        // new Zhao();
        List<String> stringArrayList = new ArrayList<String>();
        List<Integer> integerArrayList = new ArrayList<Integer>();

        Class classStringArrayList = stringArrayList.getClass();
        Class classIntegerArrayList = integerArrayList.getClass();

        if (classStringArrayList.equals(classIntegerArrayList)) {
            System.out.println("泛型测试" + "类型相同");
        }
    }
}