import java.util.*;

public class A_Add_or_XOR {
    static final int MAX = 200;

    public static void solve(Scanner in) {
        int a = in.nextInt();
        int b = in.nextInt();
        int x = in.nextInt();
        int y = in.nextInt();

        if (a == b) {
            System.out.println(0);
            return;
        }

        int[] dp = new int[MAX + 1];
        Arrays.fill(dp, -1);

        Queue<Integer> q = new LinkedList<>();
        dp[a] = 0;
        q.add(a);

        while (!q.isEmpty()) {
            int u = q.poll();

            if (u + 1 <= MAX && (dp[u + 1] == -1 || dp[u + 1] > dp[u] + x)) {
                dp[u + 1] = dp[u] + x;
                q.add(u + 1);
            }

            int v = u ^ 1;
            if (v <= MAX && (dp[v] == -1 || dp[v] > dp[u] + y)) {
                dp[v] = dp[u] + y;
                q.add(v);
            }
        }

        System.out.println(dp[b]);
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-- > 0) {
            solve(in);
        }
    }
}
