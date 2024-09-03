
// Java program to print factorial using recursion

import java.util.Scanner;

public class Factorial {

    static int factorial(int num) {
        if (num == 1) {
            return 1;
        }

        return num * factorial(num - 1);
    }

    public static void main(String[] args) {
        // int n = 5;
        System.out.println("---FACTORIAL---");

        Scanner scan = new Scanner(System.in);
        System.out.print("Enter number : ");
        int n = scan.nextInt();
        scan.close();

        System.out.print("Factorial of " + n + " is : ");
        System.out.println(factorial(n));
    }
}