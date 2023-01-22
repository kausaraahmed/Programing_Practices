import java.util.*;

class FloydsTriangle {
    public static void main(String[] args) {

        System.out.println("Enter a Number: ");
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int temp = 1;
        for (int i = 1; i <= num; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(" " + temp);
                temp++;
            }
            System.out.println();
        }
        sc.close();
    }
}
