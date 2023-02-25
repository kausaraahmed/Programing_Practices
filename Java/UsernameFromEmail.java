import java.util.*;

public class UsernameFromEmail {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Your E-mail: ");
        String Name = sc.next();
        for (int i = 0; i < Name.length(); i++) {
            if (Name.charAt(i) == '@') {
                System.out.println("Your Username is: " + Name.substring(0, i));
            }
        }
    }
}
