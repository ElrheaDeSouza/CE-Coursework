//external file for program 6
namespace grade
{
    float per(float s,float a){return((s/a)*100);}
     char grd(float b)
     {
           if(b>=75)
            return 'A';
         else if (b>=60 && b<75)
            return 'B';
         else if(b>=40 && b<60)
            return 'C';
         else if(b>=30 && b<40)
            return 'D';
            else
                return 'F';

    }


}
 using namespace std;
                    using namespace grade;
