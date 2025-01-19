package BasicProgs;
import java.util.Scanner;
public class prog9 {
    public static void main(String args[])
    {  System.out.println("giraffe is a carnivore. mention if the statement is true or false\n");
       boolean b;
       Scanner s=new Scanner(System.in);
       b=s.nextBoolean();
       System.out.println("the above statement is: "+b);
    }
}
