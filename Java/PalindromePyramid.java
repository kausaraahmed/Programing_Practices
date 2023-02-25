import java.util.*;

class PalindromePyramid {
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
            for (int j = i; j >= 1; j--) {
                System.out.print(j);
            }

            for (int j = 2; j <= i; j++) {
                System.out.print(j);
            }
            System.out.println();
            sc.close();
        }
    }
}
