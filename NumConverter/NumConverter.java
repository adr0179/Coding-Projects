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

    public static String toBinary(int num) {
        ArrayList<String> res = new ArrayList<>();

        if (num == 0) {
            return "00000000";
        }

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

    public static String toHex(int num) {
        ArrayList<String> res = new ArrayList<>();

        if (num <= 9) {
            return Integer.toString(num);
        } 

        while(num >= 1) {
            if (num % 16 == 10) {
                res.add("A");
                num = Math.round(num / 16);
            } else if (num % 16 == 11) {
                res.add("B");
                num = Math.round(num / 16);
            } else if (num % 16 == 12) {
                res.add("C");
                num = Math.round(num / 16);
            } else if (num % 16 == 13) {
                res.add("D");
                num = Math.round(num / 16);
            } else if (num % 16 == 14) {
                res.add("E");
                num = Math.round(num / 16);
            } else if (num % 16 == 15) {
                res.add("F");
                num = Math.round(num / 16);
            } else {
                res.add(Integer.toString(num % 16));
                num = Math.round(num / 16);
            }
        }

        return toString(res);
    }

    public static void main(String[] args) {
        System.out.println(toBinary(87));
        System.out.println(toBinary(20));
        System.out.println(toBinary(255));
        System.out.println(toBinary(0));
        System.out.println(toBinary(4532));
        System.out.println(toBinary(97644));
        System.out.println("---------------------------------");
        System.out.println(toHex(87));
        System.out.println(toHex(20));
        System.out.println(toHex(347));
        System.out.println(toHex(2220));
    }
}