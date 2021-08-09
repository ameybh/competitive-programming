import java.io.*;
import java.util.*;
public class Main {
    public static Scanner obj = new Scanner(System.in);
    public static PrintWriter out = new PrintWriter(System.out);
    public static Vector<Long> od;

    public static void main(String[] args) {

        int length = obj.nextInt();
        od = new Vector<>();
        long num = 2;
        for (int i = 0; i <= 15; i++) {

            od.add(num);
            num = num * 4;
        }
        while (length-- != 0) {
            solve();
        }
        out.flush();
    }

    public static void solve() {
        long n = obj.nextInt();
        long x = obj.nextInt();
        if (n % 2 == 1 && x == 0) {
            out.println(-1);
            return;
        }
        if (n <= x) {
            out.println(1);
            return;
        }
        Vector<Long> v = new Vector<>();
        for (int i = od.size() - 1; i >= 0; i--) {
            while (n >= od.get(i)) {
                n = n - od.get(i);
                v.add(od.get(i));
            }
        }
        long sum = n;
        int count = 0;
        for (int i = v.size() - 1; i >= 0; i--) {
            if (sum + v.get(i) <= x) {
                sum += v.get(i);
                count++;
            }
        }
        int ans =v.size() - count + 1;
        if(n==0)ans=Math.min(ans,v.size()-1);
        out.println(ans);
    }
}

