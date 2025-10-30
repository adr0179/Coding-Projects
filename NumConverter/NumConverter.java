package NumConverter;

// work in progress

public class NumConverter {
    static int binMax = 8;

    public static String toString(String[] arr) {
        String str = "";

        for (int i = arr.length - 1; i >= 0; i--) {
            str += arr[i];
        }

        return str;
    }

    public static String binaryConvert(int num) {
        String[] res = new String[binMax];

        for (int i = 0; i < binMax; i++) {
            if (num % 2 == 1) {
                res[i] = "1";
                num = Math.round(num / 2);
            } else {
                res[i] = "0";
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
    }
}