import java.util.*;

class Pyramid {
    public static void main(String[] args) {
        System.out.print("Enter a number: ");
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int temp = 1;
        for (int i = 1; i <= num; i++) {
            for (int j = 1; j <= num - i; j++) {
                System.out.print(" ");
            }
            for (int j = 1; j <= temp; j++) {
                System.out.print("I");
            }
            temp = temp + 2;
            System.out.println();
        }
        for (int j = 1; j <= temp - 2; j++) {
            System.out.print("T");
        }
        sc.close();
    }
}
