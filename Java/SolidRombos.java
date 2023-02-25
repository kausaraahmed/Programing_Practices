import java.util.*;

class SolidRombos {
    public static void main(String[] args) {
        System.out.print("Enter a number: ");
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        for (int i = 1; i <= num; i++) {
            for (int j = 1; j <= num - i; j++) {
                System.out.print(" ");
            }
            for (int j = 1; j <= num; j++) {
                System.out.print("T");
            }

            System.out.println();
        }
        sc.close();
    }
}
