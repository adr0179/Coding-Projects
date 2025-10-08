package NumbersGame;
import java.util.Scanner;

public class NumbersGame {

    public static Scanner keyboard = new Scanner(System.in);

    public static void main(String[] args) {
//        int num = 12;
//        System.out.println(reverseFactorial(num, 2));
        int option = 0;
        int number = 0;
        while(option != -1){
            printChoices();
            option = keyboard.nextInt();
            System.out.print("Enter a Number: ");
            number = keyboard.nextInt();
            switch (option) {
                case 1:
                    System.out.println("The single digit reduction of " + number + " is " + reduceToSingleDigit(number));
                    break;
                case 2:
                    if(reverseFactorial(number, 2) == -1){
                        System.out.println(number + " is not a factorial of any integer");
                    } else {
                        System.out.println(number + " is the factorial of " + reverseFactorial(number, 2));
                    }
                    break;
                case 3:
                    System.out.println("The sum of squares of " + number + " is " + sumSquaresDigits(number));
                    break;
            }
        }
    }

    public static int reduceToSingleDigit(int num) {
        if(num < 10){
            return num;
        }
        return reduceToSingleDigit( num%10 + reduceToSingleDigit(num/10) );
    }

    public static int reverseFactorial(int num, int div){
        if(num == div){
            return div;
        } else if( num%div == 1 || num == 0){
            return -1;
        }
        return reverseFactorial(num/div, div+1);
    }

    public static int sumSquaresDigits(int num){
        if(num == 0){
            return 0;
        }
        return (num%10)*(num%10) + sumSquaresDigits(num/10);
    }

    public static void printChoices() {
        System.out.println("\nWelcome To The Numbers Game\n");
        System.out.println("   1. Reduce To Single Digit");
        System.out.println("   2. Reverse Factorial");
        System.out.println("   3. Sum of Squares of Digits");
        System.out.println("   0. Exit");
        System.out.print("Choose an option: ");
    }
}