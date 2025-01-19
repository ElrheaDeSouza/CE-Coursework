package BasicProgs;

import java.util.Scanner;

public class prog7 {
    public static void main(String args[])
    {  final float PI=3.14f;
       double rad;
       Scanner s=new Scanner(System.in);
       System.out.println("enter the radius\n");
       rad=s.nextDouble();
       double area=rad*rad*PI;
       System.out.println("area of a circle="+(String.format("%.4f", area)));
    }
}
