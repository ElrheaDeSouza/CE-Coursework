package ExceptionHandling;

public class FinallyDemo {
    static void procA() 
    {	try 
        {	System.out.println("procA");
                throw new RuntimeException("demo");
        }
        finally {System.out.println("procA's finally");}
    }
        public static void main(String args[]) 
    {	try 
        {	procA();} 
        catch (Exception e) 
        {	System.out.println("Exception caught");}
        //procB();
        //procC();
    }
}
