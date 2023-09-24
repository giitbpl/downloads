import java.util.Scanner;

class ConfusingNumber {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("enter a number");
        int num = scanner.nextInt();
        int digit = 0;
        boolean flag = false;
        while (num > 0) {
            digit = num % 10;
            if (digit != 0 && digit != 1 && digit != 6 && digit != 8 && digit != 9) {
                flag = true;
                break;
            }
            num = num / 10;
        }
        if(flag==false) {
            System.out.println("confusing number");
        }
        else
        {
            System.out.println("not confusing number");
        }
        scanner.close();
    }
}