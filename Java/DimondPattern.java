import java.util.*;

class DimondPattern {
    public static void main(String[] args) {
        System.out.print("Enter a number: ");
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        for (int i = 1; i <= num; i++) {

            // first space
            for (int j = 1; j <= num - i; j++) {
                System.out.print(" ");
            }

            // number
            for (int j = 1; j <= (2 * i) - 1; j++) {
                System.out.print("*");
            }
            System.out.println();
        }

        // lower half
        for (int i = num; i >= 1; i--) {

            // first space
            for (int j = 1; j <= num - i; j++) {
                System.out.print(" ");
            }

            // number
            for (int j = 1; j <= (2 * i) - 1; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
        sc.close();
    }
}
