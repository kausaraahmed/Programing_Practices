import java.util.*;

class ButterflyPattern {
    public static void main(String[] args) {
        System.out.print("Enter a number: ");
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        for (int i = 1; i <= num; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print("I");
            }
            for (int j = 1; j <= (2 * (num - i)); j++) {
                System.out.print(" ");
            }
            for (int j = 1; j <= i; j++) {
                System.out.print("I");
            }
            System.out.println();
        }
        for (int i = num; i >= 1; i--) {
            for (int j = i; j >= 1; j--) {
                System.out.print("I");
            }
            for (int j = (2 * (num - i)); j >= 1; j--) {
                System.out.print(" ");
            }
            for (int j = i; j >= 1; j--) {
                System.out.print("I");
            }
            System.out.println();
        }
        sc.close();
    }
}
