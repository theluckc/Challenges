package Java;
import java.util.Scanner;
public class J1004 {
    public static void main(String[] args)throws Exception{
        Scanner input = new Scanner(System.in);
        int A = input.nextInt();
        int B = input.nextInt();
        int PROD = A * B;      

        input.close();        

        System.out.println("PROD = " + PROD);
    }
}
