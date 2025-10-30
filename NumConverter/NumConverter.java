package NumConverter;
import java.util.ArrayList;

// work in progress

public class NumConverter {
    public static String toString(ArrayList<String> arr) {
        String str = "";

        for (int i = arr.size() - 1; i >= 0; i--) {
            str += arr.get(i);
        }

        return str;
    }

    public static String binaryConvert(int num) {
        ArrayList<String> res = new ArrayList<>();

        while (num >= 1) {
            if (num % 2 == 1) {
                res.add("1");
                num = Math.round(num / 2);
            } else {
                res.add("0");
                num = Math.round(num / 2);
            }
        }

        return toString(res);
    }

    public static void main(String[] args) {
        System.out.println(binaryConvert(87));
        System.out.println(binaryConvert(20));
        System.out.println(binaryConvert(255));
        System.out.println(binaryConvert(0));
        System.out.println(binaryConvert(4532));
    }
}