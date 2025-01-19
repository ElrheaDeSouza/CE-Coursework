package BasicProgs;
import java.math.BigDecimal;
import java.math.RoundingMode;
import java.util.Formatter;


public class prog5 {
    public static void main(String args[])
    {  double x=3333.5535454;
        double y;
        Formatter fm = new Formatter();
        fm.format("%.4f", x);
        System.out.println("formatted x="+fm.toString());
        x=Double.parseDouble(fm.toString());
        System.out.println("x="+x);
        fm.close();
        System.out.println("x="+String.format("%.3f", x));
        BigDecimal d1=new BigDecimal(x);
        y=d1.setScale(2, RoundingMode.HALF_UP).doubleValue();
        System.out.println(y);
    }
}
