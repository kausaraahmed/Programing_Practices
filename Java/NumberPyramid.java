import java.util.*;

class NumberPyramid {
    public static void main(String[] args) {
        System.out.print("Enter a number: ");
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        for (int i = 1; i <= num; i++) {

            // space
            for (int j = 1; j <= num - i; j++) {
                System.out.print(" ");
            }

            // number
            for (int j = 1; j <= i; j++) {
                System.out.print(i + " ");
            }
            System.out.println();
            sc.close();
        }
    }
}
