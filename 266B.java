import java.util.*;
import java.io.*;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        nextInt();
        int t = nextInt();
        char[] queue = next().toCharArray();
        for (int i = 0; i < t; i++) {
            for (int j = 0; j < queue.length - 1; j++) {
                if (queue[j] == 'B' && queue[j + 1] == 'G') {
                    queue[j] = 'G';
                    queue[j + 1] = 'B';
                    j++;
                }
            }
        }
        System.out.println(queue);
    }

    static String next() throws IOException {
        while (st == null || !st.hasMoreTokens()) {
            st = new StringTokenizer(br.readLine().trim());
        }
        return st.nextToken();
    }

    static long nextLong() throws IOException {
        return Long.parseLong(next());
    }

    static int nextInt() throws IOException {
        return Integer.parseInt(next());
    }

    static double nextDouble() throws IOException {
        return Double.parseDouble(next());
    }

    static char nextChar() throws IOException {
        return next().charAt(0);
    }

    static String nextLine() throws IOException {
        return br.readLine().trim();
    }
}
