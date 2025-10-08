package SillyStrings;
import java.util.Scanner;

public class SillyStrings {
    public static Scanner keyboard = new Scanner(System.in);

    public static void main(String[] args) {
        int option = 0;
        String str = "";
        while(option != -1){
            printChoices();
            option = keyboard.nextInt();
            System.out.print("Enter a String: ");
            str = keyboard.next();
            switch (option) {
                case 1:
                    System.out.println("the number of vowels in" + str + "is " + countVowels(str, 0));
                    break;
                case 2:
                    System.out.println("the reverse of " + str + " is " + reverse(str));
                    break;
            }
        }
    }

    public static int countVowels(String str, int count) {
        char[] chars = str.toCharArray();

        if (chars.length == 0) {
            return count;
        } else {
            if (chars[0] == 'a' || chars[0] == 'e' || chars[0] == 'i' || chars[0] == 'o' || chars[0] == 'u') {
                count++;
                return countVowels(str.substring(1), count);
            } else {
                return countVowels(str.substring(1), count);
            }
        }
    }

        public static String reverse(String str) {
        if(str.isEmpty()){
            return str;
        } else {
            return reverse(str.substring(1)) + str.charAt(0);
        }
    }

    public static void printChoices() {
        System.out.println("\nWelcome To silly strings\n");
        System.out.println("   1. count vowels");
        System.out.println("   2. reverse string");
        System.out.println("   3. interleaved string");
        System.out.println("   0. Exit");
        System.out.print("Choose an option: ");
    }
}
