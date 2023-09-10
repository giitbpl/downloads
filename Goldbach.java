import java.util.Scanner;
class Goldbach {
    public static boolean isPrime(int x) {

        for (int i = 2; i <= x / 2; i++) {
            if (x % i == 0) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("enter number");
        int n=scanner.nextInt();
        int i=2;
        for (int j=n-2; j>=2; j--,i++) {
                if(isPrime(j)==true && isPrime(i)==true)
                {
                    System.out.println(n+"->"+i+"+"+j);
                    break;
                }
        }
        scanner.close();
    }
}