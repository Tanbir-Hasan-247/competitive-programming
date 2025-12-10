import java.util.*;

public class B_Line_Segments {
    
    public static void solve(Scanner in) {
        int n = in.nextInt();
        long px = in.nextLong();
        long py = in.nextLong();
        long qx = in.nextLong();
        long qy = in.nextLong();

        long sum = 0;
        long mx = 0;
        for (int i = 0; i < n; ++i) {
            long x = in.nextLong();
            sum += x;
            mx = Math.max(mx, x);
        }

        long dx = px - qx;
        long dy = py - qy;
        long dis = dx * dx + dy * dy;
        long sum1 = sum * sum;

        if (dis > sum1) {
            System.out.println("No");
            return;
        }

        long mn = 2 * mx - sum;
        if (mn > 0) {
            mn = mn * mn;
            if (dis < mn) {
                System.out.println("No");
                return;
            }
        }

        System.out.println("Yes");
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-- > 0) {
            solve(in);
        }
    }
}
