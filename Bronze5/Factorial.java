import java.util.Scanner;

public class Factorial{
    public static void main(String[] args){
        Scanner scan=new Scanner(System.in);
        
        int n=scan.nextInt();
        System.out.println(factorial(n));
        scan.close();
    }
    public static int factorial(int n){
        if(n<=1){
            return 1;
        }else{
            return n*factorial(n-1);
        }
    }
}